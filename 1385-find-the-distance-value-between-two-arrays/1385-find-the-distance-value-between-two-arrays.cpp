class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       
      sort(arr2.begin(), arr2.end());
        int ans=0;
        for(int i=0;i<arr1.size();i++){
            
           int mn=arr1[i]-d;
            int mx = arr1[i]+d;
        
            int lo=0, hi=arr2.size()-1;
            
            while(lo<=hi){
                
                int mid = lo + (hi-lo)/2;
                
                if(arr2[mid]>= mn && arr2[mid]<=mx){
                    ans++;
                    break;
                }else if(arr2[mid]>mx)
                    hi=mid-1;
                else
                    lo=mid+1;
            }
            
        }
         return arr1.size()-ans;
        }
        
   
    
};
