class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        const int n = nums.size();
        int cntZeros=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) 
                cntZeros++;
            else{
                int doSwaps = cntZeros;
                int idx=i;
                while(doSwaps-- && idx>0){
                    swap(nums[idx], nums[idx-1]);
                    idx--;    
                }
            }
        }
       
    }
};