class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
     return mxSub(0,(int)nums.size()-1, nums);
    }
    
    int mxSub(int left, int right, vector<int>& nums){
        
        if(left==right)
            return nums[left];
        
        int mid=left+(right-left)/2;
        int leftSum=mxSub(left,mid,nums);
        int rightSum=mxSub(mid+1,right,nums);
        
        ///cross sum // we must include (so start) nums[mid] and nums[mid+1]; 
         int totSum=nums[mid];
         
          int bestLeftCross=nums[mid];
        for(int i=mid-1;i>=left;i--){
            totSum += nums[i];
            if(totSum > bestLeftCross)
                bestLeftCross=totSum;
        }
       
        totSum=nums[mid+1];
        int bestRightCross=nums[mid+1];
        for(int i=mid+2;i<=right;i++){
            totSum += nums[i];
            if(totSum > bestRightCross )
                bestRightCross=totSum;
        }
        ////////
        
       return max({leftSum, rightSum, bestRightCross+bestLeftCross}); 
    }
    
    
    
    
    
};