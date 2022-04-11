class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        const int m=grid[0].size();
        const int n=grid.size();
        vector<int>ans;
        k%= (n*m);
        if(!k) return grid;
         for(int i= 0; i<n;i++ ){
            for(int j=0;j<m;j++){
            ans.push_back(grid[i][j]);
            }}
        int idx= (m*n)-k;
        for(int i= 0; i<n;i++ ){
            for(int j=0;j<m;j++){
              
                grid[i][j]= ans[idx];
                idx+= 1;
                idx%=(m*n);
            }
        }
        
        return grid;
        
    }
};