class Solution {
public:
    bool isPerfectSquare(int num) {
     
        for(int i=1;1ll*i*i<=num*1ll ; i++){
            if(1ll*i*i==num*1ll) return 1;
        }
        return 0;
    }
};