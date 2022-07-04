class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans=-1e4 -5;
        int subSum=0;
        for(int i=0;i<nums.size();i++){
            subSum=max(nums[i], subSum+nums[i]);
            ans=max(ans, subSum);
        }
    return ans;
    }
};