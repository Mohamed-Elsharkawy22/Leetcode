class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        const int n=nums.size();
        int tails[n];
        int mxLen=0;
        for(int i=0;i<n;i++){
            
            // binary search to find lefmost t 
            // where  t >= nums[i];
            int lo=0;
            int hi=mxLen;
            
            while(lo < hi){
                int mid=lo+(hi-lo)/2;
                
                if(tails[mid] >= nums[i]){
                    hi=mid;
                }else{
                   lo=mid+1;
                }
            
            }
            
          tails[lo]=nums[i];
            if(lo==mxLen)
                mxLen++;
        }
        
        return mxLen;
        
    }
};