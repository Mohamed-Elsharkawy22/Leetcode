class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph)
    {
        vector<vector<int>>ans;
        vector<int>path;
        path.push_back(0);
        dfs(0,graph,ans,path);
        
        return ans;
    }
    
    
    void dfs(int node, vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>&path)
    {
        
        if(node == graph.size()-1)
        {
            ans.push_back(path);
            return;
        }
        
        for(int val : graph[node])
        {
            path.push_back(val);
            dfs(val,graph,ans,path);
            path.pop_back();
        }
        
    }
    
    
};