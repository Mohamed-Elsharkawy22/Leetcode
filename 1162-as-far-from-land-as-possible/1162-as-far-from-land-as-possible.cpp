class Solution {
    const int dx[4]={0,0,-1,1};
    const int dy[4]={1,-1,0,0};
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        
        queue<pair<int, int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             if(grid[i][j]==1)
                 q.push({i,j});
            }
        }
        
        if(q.size()==0 || q.size()==n*n)
            return -1;
         int lvl=0;
        
        while(!q.empty()){
            int sz=q.size();
            lvl++;
            while(sz--){
            auto top=q.front();
            q.pop();
            
          for(int k=0;k<4;k++){
              int ni=top.first+dx[k];
              int nj=top.second+dy[k];
              
            if(ni<0 || ni>= n || nj<0 || nj>=n || grid[ni][nj]==1) continue;
              grid[ni][nj]=1;
              q.push({ni, nj});
          }
                
            
            }
            
        } 
        
        return lvl-1;
    }
};