class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int i=0,j=grid[0].size()-1;
       const int n=grid.size();
        int cnt=0;
        while(i<n && j>=0){
            
            if(grid[i][j] < 0){
                cnt += n-i;
                j--;
            }else{
                i++;
            }   
        }
        
        return cnt;
    }
};
