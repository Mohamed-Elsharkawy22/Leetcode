class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        const int n = cost.size();
        vector<int>dp(n+1, 0);
         dp[0]=cost[0];
        
        cost.push_back(0);
        
        for(int i=1;i<=n ;i++){   
            if(i==1)
                dp[i]= min(cost[0]+cost[1], cost[1]);
            else
                dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        
        return min(dp[n],dp[n-1]);
    }
};