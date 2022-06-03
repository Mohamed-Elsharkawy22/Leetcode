class NumMatrix {
public:
    vector<vector<int>>dp;
    NumMatrix(vector<vector<int>>& matrix) {
    
        const int n=matrix.size();
         dp.resize(n+1);
        for(int i=0;i<matrix.size();i++){
            dp[i].resize(matrix[0].size()+1);
            for(int j=0;j<matrix[0].size();j++){
                dp[i][j]=matrix[i][j];
               if(j>0) dp[i][j] += dp[i][j-1];
            }
        }
         for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
              if(j>0)  dp[j][i] += dp[j-1][i];
            }
        }
        
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
         
        int A= col1-1<0?0:dp[row2][col1-1];
        int b=row1-1<0?0:dp[row1-1][col2];
        int c= (row1-1<0 || col1-1<0)?0:dp[row1-1][col1-1];
        
        return dp[row2][col2] - A - b + c;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */