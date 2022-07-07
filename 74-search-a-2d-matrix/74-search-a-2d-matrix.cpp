class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int lo=0, hi=(n*m)-1;
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int nr=mid/m;
            int nc= mid%m;   
            if(matrix[nr][nc]==target)
                return true;
            else if(matrix[nr][nc]>target)
                hi=mid-1;
            else
                lo=mid+1;
        }
        
        return false;
        
    }
};