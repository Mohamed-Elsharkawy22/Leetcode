class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     
        int i=nums.size()-2;
        
        while(i>=0 && nums[i] >= nums[i+1])
            i--;
        
        
        if(i>=0){
            int j=nums.size()-1;
            while(nums[i] >= nums[j])
                j--;
            
           swap(nums,i,j);
        }
        reverse(nums,i+1);
    }
    
    void swap(vector<int>& nums,int i ,int j){
        int val=nums[i];
        nums[i]=nums[j];
        nums[j]=val;
    }
    void reverse(vector<int>& nums, int start){
        int j=nums.size()-1;
        int i=start;
        while(i<j){
            swap(nums,i,j);
            i++,j--;
        }
    }
    
};
