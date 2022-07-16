class Solution {
public:
    void dfs(int x,int y,vector<vector<int>>& grid,int dx[],int dy[]){
        grid[x][y]=2;
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<0 || ny<0 || nx>=grid.size() || ny>=grid[0].size() || grid[nx][ny]==0 || grid[nx][ny]==2) continue;
            dfs(nx,ny,grid,dx,dy);
        }
    }
    void colour(vector<vector<int>>& grid,int dx[],int dy[]){
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    dfs(i,j,grid,dx,dy);
                    return;
                }
            }
        }
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        
        //coloured one island
        colour(grid,dx,dy);

    
        // BFS traversal to find distance
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2) q.push({i,j});
            }
        }
        int dis=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                // cout<<x<<" "<<y<<endl;
                for(int j=0;j<4;j++){
                    int nx=x+dx[j];
                    int ny=y+dy[j];
                    if(nx<0 || ny<0 || nx>=grid.size() || ny>=grid[0].size()) continue; 
                    
                    if(grid[nx][ny]==1){
                        return dis;
                    }
                    if(grid[nx][ny]>=2) continue;
               
                    q.push({nx,ny});
                    grid[nx][ny]=1+grid[x][y];
                }
            }
            dis++;
        }
        return -1;
    }
};