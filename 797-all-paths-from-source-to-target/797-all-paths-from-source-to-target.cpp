class Solution {
public:
    void path(int pos,vector<int> ds,vector<vector<int>> graph,vector<vector<int>>& ans){
        if(pos==graph.size()-1){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<graph[pos].size();i++){
            ds.push_back(graph[pos][i]);
            path(graph[pos][i],ds,graph,ans);
            ds.pop_back();
        }            
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        path(0,{0},graph,ans);
        return ans;
    }
};