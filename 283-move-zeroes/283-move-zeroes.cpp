class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        const int n = nums.size();
        int idxNew=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                nums[idxNew++]= nums[i];
        }
       
        for(int i=idxNew; i<n; i++)
            nums[i]=0;
    }
};