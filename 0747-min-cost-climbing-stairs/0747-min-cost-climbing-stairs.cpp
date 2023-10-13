class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp((int)cost.size(), -1);
        return min(solve(0,cost,dp), solve(1,cost,dp)); 
    }



    int solve(int i,vector<int>& cost, vector<int> &dp ){
        if(i >= cost.size() )
            return 0;

        int &ans = dp[i];
        if(ans!= -1 )
            return ans;

        ans = 1e6+7;
        ans = min({ans, cost[i]+solve(i+1,cost,dp), cost[i]+solve(i+2, cost,dp)});

        return ans;    
    }
};