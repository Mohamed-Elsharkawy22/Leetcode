class Solution {
    private:
     const int dx[4]={1,-1,0,0};
    const int dy[4]={0,0,1,-1};
    bool valid(int nx, int ny, vector<vector<int>>& image,vector<vector<int>>& vis,int oldColor ){
        return (nx >=0 && nx <image.size() && ny>=0 && ny<image[0].size() &&!vis[nx][ny] && 
              image[nx][ny]==oldColor);
    }
    
     void dfs(int R,int C, vector<vector<int>>& image, int color, int oldColor, vector<vector<int>> &vis ){
        
        for(int i=0;i<4;i++){
            int nx = R+dx[i];
            int ny = C+dy[i];   
            
            if(valid(nx,ny,image, vis, oldColor)){
                vis[nx][ny]=1;
                image[nx][ny]=color;
                dfs(nx, ny, image, color, oldColor, vis);
            }   
        }  
    }
    
    
    
    
public:
  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>>vis(m, vector<int>(n,0));
        
        vis[sr][sc]=1;
        
        dfs(sr, sc, image, color, image[sr][sc], vis);
        image[sr][sc]=color;
        return image;
    }
    
    
   
};