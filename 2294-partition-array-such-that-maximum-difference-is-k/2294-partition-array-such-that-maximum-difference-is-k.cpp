class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        const int n = (int) nums.size();
        int st=0, ans=1;
        
        for(int i=0;i<n;i++){
            if(nums[i]-nums[st] > k)
                 ans++,st=i; 
        }
        
        return ans;
        
        
    }
};