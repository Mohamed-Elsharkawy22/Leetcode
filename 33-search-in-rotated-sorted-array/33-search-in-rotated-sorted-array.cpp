class Solution {
public:
    int search(vector<int>& nums, int target) {
     
        int lo=0;
        int hi=nums.size()-1;
        
        
        while(lo <= hi){
            
            int mid = lo+(hi-lo)/2;
            
            if(nums[mid] == target)
                return mid;
        
            if(nums[mid] >= nums[lo] ){   
                //n7t = hena 2w t7t 3lshan if arr contains one element and not equal target
                //3lashan myd7`lsh infinite loop
                
                //[lo-------mid] is ordered;
                if(nums[mid] > target && target >= nums[lo])
                    hi=mid-1;
                else
                    lo=mid+1;   
            
            }else if(nums[mid] < nums[lo]){ //if(nums[mid] < nums[hi]) w nshel else
                //[mid......hi] is ordered
                if(nums[mid] < target && target <= nums[hi])
                    lo=mid+1;
                else
                    hi=mid-1;
            }
                  
        }
        
        return -1;
    }
};