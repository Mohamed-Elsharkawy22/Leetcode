class Solution {
    int n;
    int m;
    const int dx[4]={0,0,-1,1};
    const int dy[4]={1,-1,0,0};
   bool dfs(int i,int j, vector<vector<int>>& grid){
      
       if(i < 0 || i > n-1 || j < 0 || j> m-1)
                  return 0;
           
           if(grid[i][j]==1 || grid[i][j]==-1) return 1;
           
         if(i == 0 || i == n-1 || j == 0 || j== m-1) // i have 0
                  return 0;
           
           grid[i][j]=-1; 
           
       bool ans=1;
       for(int k=0;k<4;k++){
           int ni=i+dx[k];
           int nj=j+dy[k];
           ans &= dfs(ni,nj,grid);
       }
       
       return ans;
   }
    
public:
    int closedIsland(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int ans=0;
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0)
                ans += dfs(i,j,grid);
            }
        }
        return ans;
    }
};