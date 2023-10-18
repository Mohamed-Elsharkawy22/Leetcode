class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
     
            queue<int>q;
            vector<int>inDegree(n+1, 0);
            vector<vector<int>>adj(n+1, vector<int>());

            for(int i=0;i<relations.size();i++){
                inDegree[relations[i][1]]++;
                adj[relations[i][0]].push_back(relations[i][1]);
            }


            vector<int>maxTime(n+1, 0);

            for(int i=1;i<=n;i++){
                if(!inDegree[i]){
                    q.push(i);
                    maxTime[i] = time[i-1];
                }     
            }

            while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    
                    for(int v: adj[node]){
                        maxTime[v] = max(maxTime[v], maxTime[node]+time[v-1]);
                        inDegree[v]--;
                        if( !inDegree[v]){
                            q.push(v);
                        }
                    }
            }

            int ans = 0 ;
            for(int i=1;i<=n;i++)
                ans = max(ans, maxTime[i]);

        return ans;
    }
};