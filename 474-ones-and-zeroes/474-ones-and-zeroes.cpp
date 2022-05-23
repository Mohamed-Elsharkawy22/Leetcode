class Solution {
public:
    int dp[601][101][101];
    int findMaxForm(vector<string>& strs, int m, int n) {
        const int sz=strs.size();
        
         memset(dp,-1,sizeof dp);    
        
        return helper(0,strs,m,n);
    }
    
    
    
   int helper(int i, vector<string>& strs,int m,int n){
       
      
       
       if(i==strs.size())
       {
          return 0; 
       }  
       
       int &ret=dp[i][m][n];
        if(ret!=-1) return ret;
       
       
       ret=helper(i+1, strs,m,n);
       
       int ones=count(strs[i].begin(), strs[i].end(),'1');
       int zeros=strs[i].size()-ones;
       
       if(ones<= n && zeros <= m){
           ret=max(ret,1+helper(i+1, strs,m-zeros,n-ones));
       }
       
       return ret;
   } 
    
};