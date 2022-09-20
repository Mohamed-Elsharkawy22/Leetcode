class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        const int n=nums1.size();
        const int m=nums2.size();
        
        int mx=0;
        
        vector<vector<int>>dp(n, vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i] == nums2[j]){
                    dp[i][j] = ((i == 0 || j == 0 )?1:1+dp[i-1][j-1]);
                    mx=max(dp[i][j], mx);
                }
            }
        }
        
        return mx;
    }
};