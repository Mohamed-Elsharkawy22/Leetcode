class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int lo=0, hi= nums.size()-1;
        
        
        while(lo<=hi){
            
            while(lo<hi && nums[lo]==nums[lo+1])lo++;
            while(lo<hi && nums[hi]==nums[hi-1])hi--;
            
            int mid=lo+(hi-lo)/2;
            
            if(nums[mid]==target)
                return 1;
            
            if(nums[mid] >= nums[0] ){
                if(target >= nums[0]){
                     if(nums[mid]>target)
                         hi=mid-1;
                      else
                          lo=mid+1;
                }else{
                    lo=mid+1;
                }
                
            }else{
                 if(target < nums[0] ){
                  if(nums[mid]>target)
                         hi=mid-1;
                 else
                          lo=mid+1;
            }else{
                    hi=mid-1; 
                 } 
        
        }
        }
        return 0;
    }
};
