class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=bs1(0,matrix.size()-1, matrix,target);
       
        if(row==-1){
            return 0;
        }
        
        int found=bs2(0,matrix[0].size()-1, matrix, target,row);
        
        if(found==-2) return 0;
        
        return 1;
        
    }
    
    int bs1(int lo, int hi,vector<vector<int>>& matrix, int target){
        
        int lstColIndex=matrix[0].size()-1;
        
        while(lo<hi){
            
            int mid=lo+(hi-lo)/2;
            if(matrix[mid][lstColIndex] >= target ){
                hi=mid;
            }else{
                lo=mid+1;
            } 
            
        }
        
        if(matrix[lo][lstColIndex] >= target)
            return lo;
        
        
        return -1;
        
    }
    int bs2(int lo, int hi, vector<vector<int>>& matrix, int target,int row){
        
        while(lo <= hi){
            int mid=lo+(hi-lo)/2;
           
            if(matrix[row][mid] == target){
                return -1;
            }else if(matrix[row][mid] > target){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        
        return -2;  
    }
    
    
};