class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        
    int ans=0;
        
    for(int i=0;i<nums1.size();i++){
        
        int lo=i, hi =nums2.size()-1;
          while(lo<hi){
              int mid=lo+(hi-lo+1)/2;
              
              if(nums2[mid] >= nums1[i])
                  lo=mid;
              else 
                  hi=mid-1;
              
          }
         
        if( lo<nums2.size()  && nums1[i] <= nums2[lo]){
            ans=max(ans, lo-i);
        }
    }
    
    return ans;
    }
};
