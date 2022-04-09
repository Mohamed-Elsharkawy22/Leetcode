class Solution {
public:
    const int MOD=1e9+7;
    
    int threeSumMulti(vector<int>& arr, int target) {
        int ans=0;
        vector<int>count(301,0);
        for(int i=0;i<arr.size();i++){
            int comp1=target-arr[i];
           
            for(int j=i+1;j<arr.size();j++){
              
                int comp2=comp1-arr[j];
               
                 if(comp2>=0)ans= (ans%MOD+ count[comp2]%MOD)%MOD;
                
                count[arr[j]]++;
            }
            count.assign(301,0);
        }
        
        return ans;
        
    }
};