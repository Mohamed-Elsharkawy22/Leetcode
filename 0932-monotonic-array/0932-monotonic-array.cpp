class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool ans = true;
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                ans = false; // not decreasing.
                break;
            }
        }
        // ans = T // it is decreasing
       if(!ans){ 
        for(int i=1 ;i<nums.size();i++){
            if(nums[i] < nums[i-1]){
                return false;
            }
        }
       }

        return true;
        
    }

    
};