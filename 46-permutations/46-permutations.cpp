class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        const int n=nums.size();
        vector<int>temp;
        vector<int>used(n,0);
        vector<vector<int>>ans;
        permuteAns(temp,ans,nums,used);
        
        return ans;
    }
    
    
    void permuteAns(vector<int> &temp, vector<vector<int>>&ans, vector<int> &nums, vector<int>&used){
        
        if(temp.size()==nums.size()){
            
            ans.push_back(temp);
            
            return ;
        }
        
        
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            
            temp.push_back(nums[i]);
            used[i]=1;
            permuteAns(temp, ans, nums, used);
            used[i]=0;
            temp.pop_back();
        }
        
        
        
        
    }
    
    
    
    
};