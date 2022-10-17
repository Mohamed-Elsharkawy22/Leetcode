  int dp[101][101][27][101];
class Solution { 
public:
    int getLengthOfOptimalCompression(string s, int k) {
        memset(dp,-1, sizeof dp);
        return solve(s,0,0,26,k);
    }
    int solve(string &s,int i, int len, int prev, int k){
        if(k<0)
            return INT_MAX/2 ; //inf
        
         if(i >= s.size())
            return 0;
        
        int &ret=dp[i][len][prev][k];
        if(~ret)
            return ret;
       
        ret = solve(s,i+1,len, prev, k-1);//delete
        
        if(s[i]-'a' == prev){
            if(len ==1 || len == 9 || len == 99) 
               ret = min(ret,1+solve(s,i+1,len+1, prev, k));
            else
                ret = min(ret, solve(s,i+1,len+1, prev, k));
        }else{
            ret = min(ret, 1+solve(s,i+1,1, (s[i]-'a'), k));
        }
        
        return ret;
    }
};