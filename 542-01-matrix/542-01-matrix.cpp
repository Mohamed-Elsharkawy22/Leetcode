class Solution {
    const int dx[4]={0,0,1,-1};
    const int dy[4]={1,-1,0,0};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>dis(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                    dis[i][j]=0;
                }
            }
        }
        
        while(!q.empty()){
            auto top=q.front();
            q.pop();
           for(int k=0;k<4;k++){
               int ni=top.first+dx[k];
               int nj=top.second+dy[k];
               
               if(ni<0 || ni>=n || nj<0 || nj>=m || dis[ni][nj]>-1) continue;
               
               dis[ni][nj]=dis[top.first][top.second]+1;
               
               q.push({ni,nj});
           } 
            
            
            
        }
        
        return dis;
        
        
    }
};