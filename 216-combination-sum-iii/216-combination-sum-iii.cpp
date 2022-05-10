class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ret;
        vector<int>v;
        solve(1,k,n,v,ret);
        return ret;
    }
    
    
    void solve(int st, int k ,int sum, vector<int>&v, vector<vector<int>>&ret){
        
        if(sum<0) return ;
        
        if(k==0){
            if(sum==0){
                ret.push_back(v);
            }
            
            return ;
        }
        
        
        for(int j=st;j<=9;j++){
            v.push_back(j);
            
            solve(j+1, k-1, sum-j,v, ret);
            
            v.pop_back();
        }
        
        
        
        
    }
    
    
};