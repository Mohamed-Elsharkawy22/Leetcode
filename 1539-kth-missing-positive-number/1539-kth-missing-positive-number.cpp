class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int lo=0,hi=arr.size()-1;
        
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            
            if(arr[mid]-mid-1 >= k)
                hi=mid-1;
            else
                lo=mid+1;
        }
        
       
        return lo+k;
        
        
    }
};