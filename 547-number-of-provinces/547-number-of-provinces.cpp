class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
       const int n=isConnected.size();
       vector<int>vis(n,0);
       vector<vector<int>>graph;
        
        for(int i=0;i<isConnected.size();i++)
        {  graph.push_back({});
            for(int j=0;j<isConnected[i].size();j++)
            {
                if(isConnected[i][j])
                {
                    graph[i].push_back(j);
                }
            }
        }
        
        int ans=0; 
       for(int i=0;i<n;i++){
           if(vis[i]==1) continue;
           ans++;
           dfs(i, graph, vis);
       } 
        return ans;
    }
    
    void dfs(int node, vector<vector<int>>& isConnected, vector<int>&vis)
    {
        vis[node]=1;
        for(int val:isConnected[node]){
            if(vis[val]==1) continue;
            dfs(val, isConnected,vis);
        }
        
        
    }
    
    
    
};