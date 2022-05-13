class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i=nums.size()-2;
        while(i>=0 && nums[i]>= nums[i+1]){
            i--;
        }
        
        if(i>=0){
            int j=nums.size()-1;
            
            while(nums[i] >= nums[j]){
                j--;
            }
            swap(nums[i], nums[j]);
        }
        
        reverse(nums, i+1);
    
    }
    
    
    
    void reverse(vector<int>&nums, int st){
        
        int en=nums.size()-1;
        
        while(st<en){
            swap(nums[st], nums[en]);
            st++;
            en--;
        }
        
    }
    
    
};