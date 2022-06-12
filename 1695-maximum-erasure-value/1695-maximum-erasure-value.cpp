class Solution {
public:
    
    int lookup[10001];
    int maximumUniqueSubarray(vector<int>& nums) {
        
        const int n=nums.size();
        memset(lookup,0,sizeof lookup);
        
        int st=0;

        int sum=0;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            while(lookup[nums[i]] > 0){
                lookup[nums[st]]--;
                sum -= nums[st];
                st++;
                
            }
            
            sum += nums[i];
            lookup[nums[i]]++;
            ans=max(ans, sum);
            
        }        
     
        return ans;
    }
};