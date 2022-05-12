class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>ans;
        
        combineAns(1,temp,ans,k,n);
        
        return ans;
    }
    
    
    void combineAns(int st, vector<int>&temp,vector<vector<int>>&ans, int k, int n)
    {
        
        if(temp.size()==k){
            
            ans.push_back(temp);
            
            return ;
        }
        
        for(int i=st;i<=n;i++){
            temp.push_back(i);
            combineAns(i+1, temp, ans, k, n);
            temp.pop_back();
        }
        
    }
    
    
};