class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=0;
        int fst=0,lst=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(palindrome(s,i,j,dp)){
                    int sz=j-i+1;
                    if(ans<sz){
                        ans=sz;
                        fst=i, lst=j;
                    }
                }
            }
        }
        
       
       return s.substr(fst, lst-fst+1);
        
    }
    
   bool palindrome(string &s,int i, int j, vector<vector<int>>& dp){
       if(i==j) return 1;
       
       if(i+1==j) return s[i]==s[j];
       
       int &ret=dp[i][j];
       if(~ret)
           return ret;
       ret=0;
       
       if(s[i]==s[j])
           ret=palindrome(s,i+1,j-1,dp);
      
       return ret;
   }
    
    
    
    
    
    
};