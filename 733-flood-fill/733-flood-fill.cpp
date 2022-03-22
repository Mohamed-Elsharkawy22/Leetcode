class Solution {
    private:
    int n;
    int m;
    
     bool valid(int i,int j,vector<vector<int>>& image, int newColor,int oldColor,
               vector<vector<int>>& vis){
         
       return (i>=0 && i < n && j>=0 && j< m &&
              !vis[i][j] &&image[i][j]==oldColor); 
    }
    
    const int dx[4]={1,-1,0,0};
    const int dy[4]={0,0,1,-1};
    
     void dfs(int i,int j, int newColor,int oldColor ,vector<vector<int>>& image,
             vector<vector<int>>& vis){

         
          
        image[i][j]=newColor;
         vis[i][j]=1;
         
        for(int k=0;k<4;k++){
            int ni=i+dx[k];
            int nj=j+dy[k];
            
            if(!valid(ni, nj, image,newColor,oldColor,vis))
                 continue;
            dfs(ni, nj, newColor, oldColor, image,vis);
        }
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
      n=image.size();
      m=image[0].size();  
        
        vector<vector<int>>vis(n,vector<int>(m,0));
       
        int oldColor=image[sr][sc];
        
        dfs(sr, sc, newColor, oldColor,image,vis); 
       
        return image;
    }
    
   
    
   
    
    
    
};