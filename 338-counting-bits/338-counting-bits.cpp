class Solution {
public:
    
    // 01111 odd ->>> /2 ->>>>00111 ->>> right shift drop first one from right;
    //odd number loss one setted bit
    // odd number has more numbers of ones by one than i/2; bcz when i did i/2 i dropped the first one 
    
    
    // 01110 even ->>> /2 ->>>> 00111 -->>> right shift only lose zero not one
    // enven number has same number of bits like i/2;
    vector<int> countBits(int n) {
        //n
        vector<int>bits(n+1,0);
        
        for(int i=1;i<=n;i++){
         if(i%2==0)
             bits[i]= bits[i/2];
         else
            bits[i]= bits[i/2]+1; 
        }
        return bits;
    }
}; 

   