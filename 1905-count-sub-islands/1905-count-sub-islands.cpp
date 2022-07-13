class Solution {
    const int dx[4]={0,0,-1,1};
    const int dy[4]={1,-1,0,0};
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid1.size();
        int m=grid1[0].size();
        
        queue<pair<int, int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid1[i][j]==1){
                    q.push({i,j});
                    grid1[i][j]=-1;//visited
                    
                    while(!q.empty()){
                        auto top=q.front();
                        q.pop();
                    
                    for(int k=0;k<4;k++){
                        int ni=top.first+dx[k];
                        int nj=top.second+dy[k];
                        
                        if(ni>=0 && ni<n && nj>=0 && nj<m && grid1[ni][nj]==1){
                            grid1[ni][nj]=-1;//visited
                            q.push({ni,nj});   
                        }
                            
                    }
                    }
                }
            }
        }
        n=grid2.size();
        m=grid2[0].size();
        int ans=0;
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    bool isValid=1;
                    q.push({i,j});
                    grid2[i][j]=-1;//visited
                    if(grid1[i][j]!=-1)
                        isValid=0;
                    while(!q.empty()){
                        auto top=q.front();
                        q.pop();
                    
                    for(int k=0;k<4;k++){
                        int ni=top.first+dx[k];
                        int nj=top.second+dy[k];
                        
                        if(ni>=0 && ni<n && nj>=0 && nj<m && grid2[ni][nj]==1){
                            grid2[ni][nj]=-1;//visited
                             if(grid1[ni][nj]!=-1)
                                   isValid=0;
                            q.push({ni,nj});   
                        }
                            
                    }
                    }
                 if(isValid)
                     ans++;
                }
                
            }
        }
        return ans;
        
    }
};