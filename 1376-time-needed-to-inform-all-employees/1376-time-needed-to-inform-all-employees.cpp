class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>>adj(n, vector<int>());
        for(int i=0;i<n;i++){
             if(manager[i]!=-1)
                adj[manager[i]].push_back(i);
        }
        return dfs(headID, manager, informTime, adj);
    }
    
    
    int dfs(int node, vector<int>& manager, vector<int>& informTime, vector<vector<int>>&adj )           {
        int maxChildCost=0;
        
        for(int v: adj[node]){           
            maxChildCost=max(maxChildCost, dfs(v,manager,informTime,adj));
        }
        
        return maxChildCost+informTime[node];
    }
    
};