class Solution {
    const int dx[4] = {0,0,-1,1};
    const int dy[4] = {1,-1,0,0};
public:
    int shortestBridge(vector<vector<int>>& grid)
    {
        int n = grid.size();
    
        queue< pair<int,int> > q;
        bool br=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                    grid[i][j]=0; //visited
                    dfs(i, j, grid, q);
                    br=1;
                        break;
                }
            }
            if(br) break;
        }
        
        int lvl=0;
        while(!q.empty())
        {
            int sz=q.size();
            lvl++;
            while(sz--)
            {
            auto top=q.front();
               q.pop();
            
            for(int k=0;k<4;k++)
            {
                int ni=top.first+dx[k];
                int nj=top.second+dy[k];
                
            if(ni < 0 || ni >= grid.size() || nj < 0 || nj >= grid.size()|| grid[ni][nj]==-1)                                continue;
                if(grid[ni][nj]==1)
                    return lvl-1;
                else{
                    q.push({ni,nj});
                    grid[ni][nj]=-1;
                }
             }
           }
        }
        
    return -1;
    }
    
    void dfs(int i,int j, vector<vector<int>>& grid, queue<pair<int,int>>&q)
    {    
        for(int k=0;k<4;k++)
        {
            int ni=i+dx[k];
            int nj=j+dy[k];
            
            
        if(ni < 0 || ni >= grid.size() || nj < 0 || nj >= grid.size() || grid[ni][nj] == 0)
            continue;
            
            
            q.push({ni,nj});
            grid[ni][nj]=0;
            dfs(ni, nj, grid, q);
            
        }
        
    }
    
    
};

