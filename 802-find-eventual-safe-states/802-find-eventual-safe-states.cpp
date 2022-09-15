class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        vector<int>ans;
        unordered_map<int, int> safe;
        
         
         for(int i=0;i<graph.size();i++)
             dfs(i,graph,safe,ans);
        
         for(int i=0;i<graph.size();i++)
            {
             if(safe[i])
             ans.push_back(i);
            }
         return ans;
    
    } 
    
    bool dfs(int node,vector<vector<int>>& graph, unordered_map<int, int> &safe, vector<int>&ans){
        
        if(safe.count(node)>0)
            return safe[node];
        
           safe[node]=0;

          for(int v:graph[node]){
              if(!dfs(v,graph,safe,ans))
                  return false;
          }
        
        safe[node]=1;
        return 1;
        
        
    }
    
    
};
