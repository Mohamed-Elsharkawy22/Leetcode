class Solution {
    int n;
    int m;
     const int dx[4]={0,0,-1,1};
     const int dy[4]={1,-1,0,0};
     void dfs(int i, int j, vector<vector<int>>& grid, int &ans ){
        
         for(int k=0;k<4;k++){
             int ni=i+dx[k];
             int nj=j+dy[k];
             
             if(valid(ni,nj,grid))
             {
                 ans++;
                 grid[ni][nj]=0;
                 
                 dfs(ni,nj,grid,ans);
             }
         } 
    };
    
    bool valid(int i, int j, vector<vector<int>>& grid ){
        return (i>=0 && i<n && j>=0 && j<m && grid[i][j]==1 );
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       n=grid.size();
       m=grid[0].size();
        int ans=0;
        int cnt=0;
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0 ) continue;
                
                 ans++;
                 grid[i][j]=0;
                dfs(i,j,grid,ans);
                cnt=max(cnt, ans);
                ans=0;
            }
        }
        
        return cnt;
    }
    
    
   
    
    
    
};