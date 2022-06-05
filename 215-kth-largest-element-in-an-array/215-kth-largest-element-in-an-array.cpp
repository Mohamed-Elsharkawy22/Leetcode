class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       const int n=(int)nums.size();
        vector<int>idx(n,0);
        
        for(int i=0;i<n;i++){
            idx[i]=i;
        }
        
        sort(idx.begin(),idx.end(),[&](int i,int j){
           return nums[i]>nums[j]; 
        });
        
        return nums[idx[k-1]];
    }
};