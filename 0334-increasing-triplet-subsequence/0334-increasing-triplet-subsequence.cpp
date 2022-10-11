class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        const int n=nums.size();
        
        if(n <3)
            return 0;
        
        int mid = INT_MAX;
        int lst = INT_MAX;
        
        for(int i=0;i<n;i++){
           if(nums[i] > mid)
               return 1;
            else if(nums[i] > lst && nums[i] < mid)
                mid = nums[i];
            else if(nums[i]<lst)
                lst=nums[i];
        }
        
        return 0;
    }
};




