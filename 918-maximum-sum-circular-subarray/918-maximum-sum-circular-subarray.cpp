class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        /*
        there is two cases for the  max subarray
        
        1-abc **** abc // and this kadane is enough.
        2-**** abc **** // maxSubarray = totalSum - minSubarray.
        
        getting minSubarray by kadane by unverting all array elements into its negative values;
                      curSum1=max(curSum1-nums[i], -nums[i]);

        */
        int curSum=0;
        int best=-30001;
          int sum=0;
        for(int i=0;i<nums.size();i++){
        sum += nums[i];
            curSum=max(curSum+nums[i],nums[i]);

            best=max(best, curSum);    
                    
        }
        if(best<0) return best; //if(all element are -ve return smallest one)
        // important special case; 
        
           int curSum1=0;
        int best1=-30001;
       
         
           for(int i=0;i<nums.size();i++){
              curSum1=max(curSum1-nums[i], -nums[i]);
              best1=max(best1, curSum1);    
        }  
                // we inverted all elements into its negative 
                // we should restore best1 into positive again by mul by -1 so sum -(-best1)
                // sum+best1;
    
      
        return max(best, sum + best1);
        
    }
};