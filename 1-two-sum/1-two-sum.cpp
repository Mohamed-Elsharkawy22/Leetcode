class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>lookup;
        const int n=nums.size();
        for(int i=0;i<n;i++){
            if(lookup.count(target-nums[i])>0){
                return vector<int>{i, lookup[target-nums[i]] };
            }
            lookup[nums[i]]=i;
        }
        
        return vector<int>{};//dump
    }
};