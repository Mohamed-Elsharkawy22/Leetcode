class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum < x) return -1;
        
        int target = sum-x;
        
        if(target==0) return nums.size();
        
        int fast=0,slow=0;
        
        int cum=0;
        int longest=-1;
        while( slow<nums.size()){
            while(fast<nums.size()  && cum < target ){
                cum += nums[fast];
                fast++;
            }
            
         if(cum == target)   
             longest=max(longest, fast-slow);
            
            cum-= nums[slow];
            slow++;
        }
        
  if(longest==-1) return -1;
        
        return nums.size()-longest;
        
    }
};