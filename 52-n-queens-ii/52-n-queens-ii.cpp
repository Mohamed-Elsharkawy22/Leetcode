class Solution {
public:
    int totalNQueens(int n) {
        int ans=0;
        
        int cols=0;
        int dig1=0;
        int dig2=0;
        permute(0,n,cols,dig1,dig2,ans);
        return ans;
    }
    
    void permute(int row,const int &n, int &cols, int &dig1, int &dig2, int &ans){
        
        if(row==n){
            ans++;
        }
        
        for(int col=0;col<n;col++){
            
            if( (cols&(1<<col)) || (dig1&(1<<(row+col)) || (dig2&(1<<(row-col+n-1)))) )continue; 
            
           cols |= (1<<col); 
           dig1 |= (1<<(row+col));
           dig2 |= (1<<(row-col+n-1));      
                 
           permute(row+1,n,cols,dig1,dig2,ans);
                 
           cols &= ~(1<<col); 
           dig1 &= ~(1<<(row+col));
           dig2 &= ~(1<<(row-col+n-1));        
                 
        }
        
        
        
    }
    
    
};