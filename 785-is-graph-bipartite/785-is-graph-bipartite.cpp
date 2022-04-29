class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        const int n=graph.size();
        int ans=1;
        vector<int>vis(n,-1);
    
        for(int i= 0 ;i<n;i++)
            vis[i]==-1?vis[i]=1:1,isBipartite(i,vis,graph,ans);
        
        return ans;
    }

    void isBipartite(int node, vector<int> &vis,vector<vector<int>>& graph, int &ans){
        
        if(!ans) return ;
        
        for(int v: graph[node]){
            
            if(vis[v] == -1){
                vis[v] = vis[node]^1;
                ans &= vis[node] != vis[v]; 
                isBipartite(v, vis, graph,ans);
            }else{
              ans &= vis[node] != vis[v];  
            }
            
           
        }
     
    }
    
    
    
    
};