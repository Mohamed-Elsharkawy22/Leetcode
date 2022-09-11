class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
       map<int, int>lookup;
        
        for(int i=0;i<nums.size();i++){
            if(lookup.count(nums[i])>0)
                return true;
            
            lookup[nums[i]]++;
        }
        
        return false;
    }
};