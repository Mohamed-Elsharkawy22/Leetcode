class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        const int n=prices.size();
        vector<vector<int>>dp(n, vector<int>(2,-1));
      
        return solve(0,0,(int)prices.size(), prices,dp);
    }
    
    
    int solve(int i, int hold, const int &n, vector<int>& prices,vector<vector<int>>&dp){
        
        if(i==n)
            return 0;
        
        
        int &ret = dp[i][hold];
        if(~ret) return ret;
        
       
        if(hold){
            ret=max(solve(i+1,hold,n,prices,dp), solve(i+1,0,n,prices,dp)+prices[i]);
        }else{
            ret=max(solve(i+1,hold,n,prices,dp), solve(i+1,1,n,prices,dp)-prices[i]);
        }
        
        
        return ret;
        
        
        
    }
    
};