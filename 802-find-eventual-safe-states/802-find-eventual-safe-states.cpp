class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> ans;
        vector<int> out(n);
        //make a reverse adj list(transpose of a graph)
        vector<int> adj[n];
        
        for(int i=0;i<n;i++){
            for(auto nbr: graph[i]){
                out[i]++;
                adj[nbr].push_back(i);
            }
        }
        
        //take the terminal nodes in the queue
        queue<int> q;
        for(int i=0;i<n;i++){
            if(out[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int top = q.front(); q.pop();
            ans.push_back(top);
            for(auto nbr: adj[top]){
                out[nbr]--;
                //out[nbr] will be zero for a node if and only if all of its edges make it to a safe node 
                //or terminal node, take those nbr in the queue
                if(out[nbr]==0) q.push(nbr);
            }
        }
        
        //sort, required.
        sort(ans.begin(), ans.end());
        return ans;
    }
};