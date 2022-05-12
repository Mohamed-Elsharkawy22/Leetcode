class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>>ans;
        solve(1,temp,ans,k,n);
        
        return ans;
    }
    
    void solve(int st, vector<int> &temp, vector<vector<int>>&ans, int k, int n){
        
        if(n<0) return;
        if(temp.size()==k){
            if(n==0)
             ans.push_back(temp);
            
            return;
        }
        
        for(int i=st;i<=9;i++){
            
            temp.push_back(i);
            solve(i+1, temp, ans,k,n-i);
            temp.pop_back();
        }
        
    }
    
};