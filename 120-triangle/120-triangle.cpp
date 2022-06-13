class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       
        const int n= triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        
        return minimumTotalSolve(triangle,  0,  0, dp);
    }
    
    
    int minimumTotalSolve(vector<vector<int>>& triangle, int i, int j, vector<vector<int>>&dp){
        
        if(i == triangle.size()){
            
            return 0;
        }
        
        int &ret=dp[i][j];
        if(~ret) return ret;
        
        ret=0;
        ret= triangle[i][j] + minimumTotalSolve(triangle, i+1, j, dp);
        ret=min(ret,triangle[i][j]+ minimumTotalSolve(triangle, i+1, j+1, dp));
        return ret;
        
    }
    
};