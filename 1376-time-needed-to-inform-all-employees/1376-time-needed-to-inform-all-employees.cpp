class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        int sz = manager.size();
        vector<vector<int>> adjacencyList(sz, vector<int>());
        
        for(int i=0; i<sz; i++){
            if(manager[i] == -1) continue;
            adjacencyList[manager[i]].push_back(i);
        }
        
        return dfs(headID, adjacencyList, informTime);
    }
    
    
int dfs(int id, vector<vector<int>>& adjlist, vector<int>& informTime){
   
    if(adjlist[id].size()==0) return 0;
    
    int maxtime = 0;
    vector<int> subvertices = adjlist[id];
    
    for(int i=0; i<subvertices.size(); i++){
        maxtime = max(maxtime, dfs(subvertices[i], adjlist, informTime));
    }
    
    return maxtime + informTime[id];
} 
};