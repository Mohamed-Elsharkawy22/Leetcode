class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp((int)cost.size()+1, 0);

        for(int i=(int)cost.size()-1;i>=0;i--){
            dp[i]=cost[i]+dp[i+1];

            if(i < (int)cost.size()-1)
                dp[i] = min(dp[i], cost[i]+dp[i+2]);
        }

        return min(dp[0], dp[1]);
        
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