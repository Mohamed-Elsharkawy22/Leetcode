class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
       const int n=nums.size();
        // tails[i] is the smallest t in all incresing subsequences of length i+1
        int tails[n];
        int maxLen=0;
        
        for(int num: nums){
          
        // binary search to find the leftmost t where num < t (num tst7q mkano in tails)      
            int lo=0;
            int hi=maxLen;
            while(lo < hi){
                int mid = lo+(hi-lo)/2;
                if(num > tails[mid])
                    lo=mid+1;
                else{
                    hi=mid;
                }
            }
    
            tails[hi] = num;
            if(hi== maxLen) maxLen++;
        }
    
        return maxLen;
    }
};