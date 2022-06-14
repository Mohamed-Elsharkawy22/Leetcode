class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n, vector<int>(m,-1));
        
        return solve(0,0,word1,word2,dp);
        
    }
    
    
    int solve(int i, int j, string word1, string word2, vector<vector<int>>&dp){
        
        if(i==word1.size()){
            
            return word2.size()-j;
        }
        
        if(j==word2.size()){
            return word1.size()-i;
        }
        
        int &ret=dp[i][j];
        if(~ret)
            return ret;
        
        ret=0;
        if(word1[i]==word2[j]){
            ret = solve(i+1,j+1,word1,word2,dp);
        }else{
            ret=min(1+solve(i,j+1,word1,word2,dp), 1+solve(i+1,j,word1,word2,dp));
        }
        
        
        return ret;
        
    }
};