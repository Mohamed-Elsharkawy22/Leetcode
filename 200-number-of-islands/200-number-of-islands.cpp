class Solution {
    private:
    int n;
    int m;
    const int dx[4] ={0,0,1,-1};
    const int dy[4] ={1,-1,0,0};
    
    bool valid(int nr,int nc, vector<vector<char>>& grid, vector<vector<int>>& vis){
        
        return (nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc]=='1');
    }
    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis){
        for(int i=0;i<4;i++){
            int nr=r+dx[i];
            int nc=c+dy[i];
            if(valid(nr,nc, grid,vis)){
                vis[nr][nc]=1;
               
            dfs(nr,nc, grid, vis);
            }
        }
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
       n=grid.size();
       m=grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(n, vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if( grid[i][j] =='0' || vis[i][j]==1) continue;
                cnt++;
                
                dfs(i,j,grid,vis);
            }
        }  
        return cnt;
    }
    
};