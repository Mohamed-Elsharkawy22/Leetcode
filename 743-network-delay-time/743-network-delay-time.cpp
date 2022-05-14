class Solution {
public:
    
    vector<pair<int,int>>adj[105];
    
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
      vector<int>cost(n+1,(int)1e5);
        const int nn=times.size();
        for(int i=0;i<nn;i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        
        
        priority_queue<pair<int,int>>pq;
        pq.push({0,k});
        cost[k]=0;
        while(!pq.empty()){
            
            int u= pq.top().second;
            int c= -pq.top().first;
            pq.pop();
            
            if(c > cost[u] ) continue;
            
            for(auto &e : adj[u] ){
                int newC = c+e.second;
                
                if(newC < cost[e.first]){
                    cost[e.first]=newC;
                    pq.push({-newC, e.first});
                }
                
            }
     
        }
        int ans=INT_MIN;
        for(int i=1;i<=n;i++){
            ans=max(ans, cost[i]);
        }
        return ans==(int)1e5?-1:ans;
        
    }
    
    
    
    
    
    
};