class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        const int m=grid[0].size();
        const int n=grid.size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        
        for(int i= 0; i<n;i++ ){
            for(int j=0;j<m;j++){
                
                int num= i*m+j;
                num += k;
                num %= (n*m); 
                int nr= num/m;
                int nc= num%m;
                ans[nr][nc]=grid[i][j];
            }
        }
        
        return ans;
        
    }
};