class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        const int n=nums.size();
        
        set<int>lookup;
        int st=0;

        int sum=0;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            while(lookup.find(nums[i])!=lookup.end()){
                lookup.erase(nums[st]);
                sum -= nums[st];
                st++;
                
            }
            
            sum += nums[i];
            lookup.insert(nums[i]);
            ans=max(ans, sum);
            
        }        
     
        return ans;
    }
};