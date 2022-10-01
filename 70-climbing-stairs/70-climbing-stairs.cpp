class Solution {
public:
    int climbStairs(int n) {
       // vector<int>dp(n+1,0);
        //dp[1]=1;
        //dp[2]=2;
        if(n==1)
            return n;
        int cur=2,prev=1;
        for(int i=3;i<=n;i++){
           //dp[i]=dp[i-1]+dp[i-2];
          
            cur += prev;
            prev = cur-prev;
               
        }
        
        return cur;
    }
};