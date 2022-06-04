class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<int>cols(n,0),dig1(2*n,0),dig2(2*n,0);
        vector<string>board(n, string(n,'.'));
        vector<vector<string>> ans;
        permute(n,0,ans,board,cols,dig1,dig2);
        
        return ans;
    }
    
    
    void permute(const int n,int row, vector<vector<string> >&ans,vector<string>&board, vector<int>&cols,vector<int>&dig1, vector<int>&dig2){
        
        if(row==n){
            ans.push_back(board);
            return;
        }
        
        for(int col=0;col<n;col++){
            
            if(cols[col] || dig1[col+row] || dig2[col-row+n-1]) continue;
            
            board[row][col]='Q';
            cols[col]=dig1[col+row]=dig2[col-row+n-1]=1;
            permute(n,row+1,ans,board,cols,dig1,dig2);
            board[row][col]='.';
            cols[col]=dig1[col+row]=dig2[col-row+n-1]=0;
    
        }
        
    }
    
    
    
};