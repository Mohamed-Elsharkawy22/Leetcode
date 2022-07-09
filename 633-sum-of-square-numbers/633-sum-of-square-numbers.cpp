class Solution {
public:
    bool judgeSquareSum(int c) {
        
       for(int i=0;1ll*i*i<=c;i++){
         double b=sqrt(c-1ll*i*i);
           if(b == (int)b)
               return 1;
       }
        
        return 0;
    }
};


