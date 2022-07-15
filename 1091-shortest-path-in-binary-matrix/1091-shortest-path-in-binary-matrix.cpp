class Solution {
    const int dx[8]={0, 0,1,-1,1,-1,1,-1};
    const int dy[8]={1,-1,0,0,1,-1,-1,1};
     
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        if(grid[0][0]==1) return -1;
        int n= grid.size();
       
        
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        int lvl=0;
        while(!q.empty()){
            int sz=q.size();
            lvl++;
            while(sz--){
                auto top = q.front();
                   q.pop();
                
                if(top.first==n-1 &&top.second==n-1)
                    return lvl;
                
                for(int k=0;k<8;k++){
                    int ni=top.first+dx[k];
                    int nj=top.second+dy[k];
                    
                    if(ni<0 || ni>=n || nj<0 || nj>=n || grid[ni][nj]==1) continue;
                    grid[ni][nj]=1;
                    q.push({ni, nj});   
                }
                
            }
        }
        
       return -1; 
    }
};

    
