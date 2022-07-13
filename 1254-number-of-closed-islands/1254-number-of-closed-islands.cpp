class Solution {
      const int dx[4]={1,-1,0,0};
      const int dy[4]={0,0,1,-1};
    public:    
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(grid[i][j]==0){
                  q.push({i,j});
                  bool isClosed=1;
                  while(!q.empty()){
                      auto top=q.front();
                      q.pop();
                      if((top.first ==0 || top.first ==n-1 || top.second ==0 ||top.second==m-1))                                     isClosed=0;  
                      
                      for(int k=0;k<4;k++){
                          int ni=top.first+dx[k];
                          int nj=top.second+dy[k];
                          if(ni >=0 && ni<n &&nj >=0 &&nj<m &&grid[ni][nj]==0){
                               grid[ni][nj]=1; // visitied
                                q.push({ni,nj});
                            }
                      }
                 }
                if(isClosed)
                    ans++;
              }  
          }  
        }
        return ans;
    }
};