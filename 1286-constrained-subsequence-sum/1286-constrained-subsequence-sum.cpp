class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        const int n = nums.size(); 
        priority_queue<pair<int, int>>pq;
        int ans = nums[0];
        pq.push({ans, 0});
        

        for(int i=1;i<nums.size();i++){
            while(i - pq.top().second  > k )
                pq.pop();

            int maxSoFar = max(nums[i], nums[i] + pq.top().first);
            ans = max(ans, maxSoFar);
            pq.push({maxSoFar, i});    
        }    

        return ans;
    
    }

   
};