class Solution {
    const int dx[4]={1,-1,0,0};
    const int dy[4]={0,0,-1,1};
public:
    int nearestExit(vector<vector<char>>& grid, vector<int>& entrance) {
        int n=grid.size();
        int m=grid[0].size();
        
        queue< pair<int, int> >q;
        q.push({entrance[0],entrance[1]});
        grid[entrance[0]][entrance[1]]='+';//vis
        
        int lvl=0;
        
      while(!q.empty())
      {
            int sz=q.size();
            lvl++;
            while(sz--)
            {
                auto top=q.front();
                q.pop();
                
               if((top.first==0 || top.first == n-1 || top.second==0 || top.second==m-1)
                  &&lvl!=1)
                       return lvl-1;
                
                
               for(int k=0;k<4;k++)
                {
                 int ni=top.first+dx[k];
                 int nj=top.second+dy[k];
                           
                 if(ni< 0 || ni > n-1 ||nj<0 || nj>m-1 || grid[ni][nj]=='+' )
                     continue;
             
                  q.push({ni,nj});
                  grid[ni][nj]='+';//vis
                
                  }
                
                
                }
            
        }
        
        return -1;
        
    }
};