class Solution {
public:
    int dp[10006];
    int deleteAndEarn(vector<int>& nums) {
        vector<int>sum(10005,0);
        
        for(int i=0;i<nums.size();i++){
            sum[nums[i]] += nums[i];
        }
        
        for(int i=10001;i>=0;i--){
            dp[i]=dp[i+1];
            dp[i]=max(dp[i],dp[i+2]+sum[i]);
        }
        
        
        return dp[0];
        
    }
    
  
    
    
    
    
};