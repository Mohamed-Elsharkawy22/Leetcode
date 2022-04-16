class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     
        vector<vector<int>>ans(n,vector<int>(n,0));
        
        int col=0;
        int row=0;
        int e=1;
        
        while(col <n && row <n && ans[row][col] == 0){
            
            //right
            
            while(col < n &&  ans[row][col]==0 ){
                ans[row][col++]=e++;
            }
            
            if(col >= n || ans[row][col] != 0 ) col--;
            
            //down
            row++;
            
            while(row<n &&  ans[row][col]==0){
                ans[row++][col]=e++;
            }
            
            if(row >= n  || ans[row][col] !=0 ) row--;
                
            //left 
            col--;            
            while(col>=0 &&  ans[row][col]==0){
                ans[row][col--]=e++;
            }
            
            if(col < 0 ||  ans[row][col]!=0) col++;
            
            //up
            row--;
            while(row >= 0 &&  ans[row][col]==0){
                ans[row--][col]=e++;
            }
            
            if(row<0 || ans[row][col] !=0 )row++;
            
            col++;
            
            
        }
        
        
        return ans;
        
        
        
    }
};