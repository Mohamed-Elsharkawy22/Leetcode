class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size()-1;
        if(nums[n] >= nums[0]) return nums[0];
        
        int lo=0, hi=n;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            
            if(nums[mid] >= nums[0])
             lo=mid+1;
             else
                 hi=mid;
           
        }
        return nums[lo];
    }
};
