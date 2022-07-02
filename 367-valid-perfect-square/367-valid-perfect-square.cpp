class Solution {
public:
    bool isPerfectSquare(int num) {
     
        int lo=1,hi=num;
        while(lo<=hi){
            int mid= lo+(hi-lo)/2;
            
            if(1ll*mid*mid==num*1ll){
                return true;
            }else if(1ll*mid*mid> num*1ll){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        
        return 0;
        
    }
};