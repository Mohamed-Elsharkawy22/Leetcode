class Solution {
public:
    
    int dp[100005][2][3];
    
    const int MOD=1e9 + 7;
    int n1;
    int count(int i, int a, int l){
        
        if(a>=2 || l>=3) return 0;
        
        if(i==n1){
            
            if(a<2 && l<3){
                return 1;
            }else{
                return 0;
            }
        }
        
        int &ret=dp[i][a][l];
        if(~ret) return ret;
        
        ret=0;
        
        ret = count(i+1,a,0)%MOD;
         
        ret = (ret%MOD + count(i+1,a+1,0)%MOD)%MOD;
        
        ret=(ret%MOD + count(i+1,a,l+1)%MOD)%MOD;
        
        return ret;
        
    }
    
    
    
    int checkRecord(int n) {
        memset(dp,-1,sizeof dp);
        n1=n;
        return count(0,0,0);
    }
};