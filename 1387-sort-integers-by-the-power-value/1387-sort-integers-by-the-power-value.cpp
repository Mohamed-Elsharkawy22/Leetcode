class Solution {
public:
    int getKth(int lo, int hi, int k) {
       unordered_map<int,int>dp;
       
        vector<pair<int,int>>ans;
        
        for(int i=lo;i<=hi;i++){
            int k=Steps(i, dp);
             ans.push_back({k,i});
        }
        
        sort(ans.begin(),ans.end());
        
        return ans[k-1].second;
        
    }
    
    int Steps(int n, unordered_map<int,int> &dp){
        
        if(n==1)
            return 0;
        
        if(dp.count(n)!=0) return dp[n];
        
        if(n%2==0) 
            dp[n]=1+Steps((n/2),dp);
        else
            dp[n]=1+Steps((n*3)+1,dp);            
        
        return dp[n];
        
    }
    
    
};