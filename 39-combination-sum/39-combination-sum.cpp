class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        
        solveHelper(0,temp, ans, target, candidates);
        
        return ans;
        
    }
    
    
    void solveHelper(int st,vector<int> &temp, vector<vector<int>> &ans, int target, vector<int>&nums){
        
        if(target<0) return;
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=st;i<nums.size();i++){
            
            temp.push_back(nums[i]);
            
            solveHelper(i, temp, ans, target-nums[i], nums);
            
            temp.pop_back();
            
        }
        
        
    }
    
    
};