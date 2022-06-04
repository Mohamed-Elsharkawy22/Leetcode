class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        int cols=0,dig1=0,dig2=0;
        
        vector<string>board(n, string(n,'.'));
        vector<vector<string>> ans;
        permute(n,0,ans,board,cols,dig1,dig2);
        
        return ans;
    }
    
    
    void permute(const int n,int row, vector<vector<string> >&ans,vector<string>&board, int &cols,int &dig1, int &dig2){
        
        if(row==n){
            ans.push_back(board);
            return;
        }
        
        for(int col=0;col<n;col++){
            
            if( (cols & (1<<col)) || (dig1&(1<<(row+col))  || (dig2 & (1<< (col-row+n-1) )) ) )                               continue;
            
            board[row][col]='Q';
            cols |=(1 <<col);
            dig1 |= (1<<(row+col));
            dig2 |= (1<< (col-row+n-1) );      
               
            permute(n,row+1,ans,board,cols,dig1,dig2);
            
            board[row][col]='.';
            cols &= ~(1<<col);
            dig1 &= ~(1<<(row+col));
            dig2 &= ~(1<< (col-row+n-1) );           
    
        }
        
    }
    
    
    
};