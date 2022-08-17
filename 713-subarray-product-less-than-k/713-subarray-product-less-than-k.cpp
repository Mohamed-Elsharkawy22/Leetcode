class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int left=0, right=0;
        
        int prod=1,count=0;
        while(right<nums.size()){
            
            prod *= nums[right];
            
            while(left <= right && prod >= k){
                
                prod /= nums[left++];
                
            }
           
            count += right-left+1;
            
            right++;
        }        
        
      return count;  
        
    }
};

