class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        
        int fast=0,slow=0;
        int window=0;
        
        int ans=1e5+2;
        while(slow<nums.size()){
            while(fast<nums.size() && window < target ){
                window += nums[fast++];
            }
            
            if(window >= target)
                ans=min(ans, fast-slow);
             
            window -= nums[slow];
            slow++;
            
        }
        
        return ans==1e5+2?0:ans;
        
        
        
    }
};