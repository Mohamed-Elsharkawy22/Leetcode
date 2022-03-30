class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int lo=0;
        int hi= matrix.size()*matrix[0].size()-1;
        
        while(lo<=hi){
            
            int mid = lo+(hi-lo)/2;
            
            int rIdx=mid/matrix[0].size();
            int cIdx=mid%matrix[0].size();
            
            if(matrix[rIdx][cIdx]==target){
                return 1;
            }else if(matrix[rIdx][cIdx]>target){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
            
        }
        
        return 0;
        
    }
    
   
    
};