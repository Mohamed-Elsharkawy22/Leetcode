class Solution {
    private:
    const int dx[4] = {0,0,1,-1};
    const int dy[4] = {1,-1,0,0};
    
public:
    int closedIsland(vector<vector<int>>& grid) {
        const int n = grid.size();
        const int m = grid[0].size();
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 0)
                {
                    
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    grid[i][j]=1;
                    bool isBorder=0;
                    while(!q.empty())
                    {
                        auto tp = q.front();
                        q.pop();
                        
                        if(tp.first == 0 || tp.first == n-1 || tp.second == 0 || tp.second == m-1)
                            isBorder=1;
                            
                       
                        for(int k=0;k<4;k++)
                        {
                           int ni = tp.first+dx[k];
                           int nj = tp.second+dy[k];
                           
                           if(ni < 0 || ni > n-1 || nj < 0 || nj > m-1 || grid[ni][nj]==1)
                                  continue;
                             
                           q.push({ni,nj});
                           grid[ni][nj]=1;
                           
                       }
  
                    }
                             
                     if(!isBorder)
                         ans++;
                }
            }
        } 
        return ans; 
    }
};