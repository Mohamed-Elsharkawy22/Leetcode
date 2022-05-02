class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        const int n=nums.size();
        int i=0, j=n-1;
        
           while(i<j){
            
            if(nums[i]% 2 > nums[j]%2){
                swap(nums[i],nums[j]);
            }
            
             if(nums[i]%2==0) i++;
               
             if(nums[j]%2!=0) j--;  
               
        }
       
        return nums;
        
    }
};

