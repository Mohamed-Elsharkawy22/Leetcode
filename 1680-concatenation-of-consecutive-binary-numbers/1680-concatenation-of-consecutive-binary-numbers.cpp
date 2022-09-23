class Solution {
public:
    int concatenatedBinary(int n) {
        
    int ans=0;
    int mod = static_cast<int>(1e9+7);
      int base=1; 
  
         vector<int>bit;
        for(int i=1;i<=n;i++){
            int n=i;
            bit.clear();
            while(n){ 
               bit.push_back(n%2);
               n/=2;
            }
            
            for(int i=bit.size()-1 ;i>=0;i--){
                ans = ans%mod *2 + bit[i];
                ans%=mod;
            }
            
        }
        
        return ans;
    }
};


    
    

 