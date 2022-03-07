class Solution {
public:
    long long dp[501][501];
    const long long mod = 1e9 + 7;
    long long countOrders(int n) {
        memset(dp,-1,sizeof dp);
        
        return countAllPickAndDelivery(n,n);
        
    }
    
    long long countAllPickAndDelivery(int unpicked, int undelivered){
        
        if(!unpicked && !undelivered) return 1;
        
        
        if(unpicked < 0 || undelivered<0 || undelivered < unpicked ) return 0;
        
        
        long long &ret = dp[unpicked][undelivered];
        if(~ret)
            return ret;
        
        ret=0;
        ret = unpicked * countAllPickAndDelivery(unpicked-1, undelivered);
        ret%=mod;
        
        ret += (undelivered-unpicked)%mod * countAllPickAndDelivery(unpicked, undelivered-1)%mod;
        ret%=mod;
        
        return ret;
    }
    
    
    
    
    
    
};