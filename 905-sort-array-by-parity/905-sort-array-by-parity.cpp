class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
         int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(nums[i]%2!=0)
            {
                nums.push_back(nums[i]);
                nums[i]=-1;
            }
            
        }
        vector<int>ans;
        n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!= -1) ans.push_back(nums[i]);
        }
        
        return ans;
        
    }
};