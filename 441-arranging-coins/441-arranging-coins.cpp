class Solution {
public:
    int arrangeCoins(int n) {
        
        int lo=0,hi=n;
        
        
        while(lo<hi){
            long long mid=lo+(1ll*hi-lo+1)/2;
            
            if(mid*(mid+1) > 1ll*2* n){
                hi=mid-1;
            }else{
                lo=mid;
            }
        }
        
        if(1ll*lo*(lo+1) > 1ll*2*n ) return lo+1;
        
        return lo;
        
    }
};