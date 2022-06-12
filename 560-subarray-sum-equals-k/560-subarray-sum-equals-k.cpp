class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        const int n=nums.size();
        vector<int>prefSum(n+1,0);
        
        
        for(int i=1;i<=n;i++){
            prefSum[i] = prefSum[i-1] + nums[i-1];
        }
        
       unordered_map<int, int>lookup;
        int ans=0;
        lookup[0]++;
        for(int i=1;i<=n;i++){
            ans += lookup[prefSum[i]-k];
            lookup[prefSum[i]]++;
        }
        
        
        return ans;
        
        
    }
};



