class Solution {
public:
    
   // i & (i-1) --->>> removes the first one of the right from i;
    // i tsbq (i&(i-1) )be one move 
    
    vector<int> countBits(int n) {
        vector<int> dp(n+1,0);
        for(int i=1;i<=n;i++)
           dp[i] = dp[i&(i-1)]+1;
        
        return dp;
    }
    
    
    
};