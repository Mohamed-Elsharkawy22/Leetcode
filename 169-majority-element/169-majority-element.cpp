class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ans = 0;
        
        int mxCount=-5e4+1;
        
        unordered_map<int, int>freq;
        
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]] > mxCount ){
                mxCount=freq[nums[i]];
                ans = nums[i];
                
            }
        }
        return ans;
        
    }
};