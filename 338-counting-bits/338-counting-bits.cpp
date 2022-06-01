class Solution {
public:
    vector<int> countBits(int n) {
        //nlogn
        
        vector<int>bits;
        
        for(int i=0;i<=n;i++){
            int cnt=0;
            int num=i;
            while(num){
              if(num%2!=0){  
                  cnt++;
              }
                num/=2;
            }
            bits.push_back(cnt);
            
        }
        return bits;
    }
};


   