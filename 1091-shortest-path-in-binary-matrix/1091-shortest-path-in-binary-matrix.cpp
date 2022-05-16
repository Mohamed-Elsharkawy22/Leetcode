class Solution {
private:
         int dx [8] ={0,0,1,-1,1,-1,1,-1};
         int dy [8] ={1,-1,0,0,1,-1,-1,1};
    public:
   
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)
            return -1;
    
        const int n = grid.size();
        const int m = grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        queue<pair<int,int>>q;
        q.push({0,0});
        vis[0][0]=1;
        int lvl=1;
        while(!q.empty()){
            int sz=q.size();
            
            while(sz--){
                auto node = q.front();
                q.pop();
                 if(node.first==n-1 && node.second == m-1){
                        return lvl;
                     }
                for(int i=0;i<8;i++){
                    int nx=node.first+dx[i];
                    int ny=node.second+dy[i];
                   
                    if(nx <0 || nx >=n || ny<0 || ny>=m || vis[nx][ny] || grid[nx][ny]==1) continue;
                    
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
            
            lvl++;
        }
        return -1;
    }
};