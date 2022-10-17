class Solution {
public:
    int dp[101];
    int numDecodings(string s) {
        memset(dp, -1, sizeof dp);
        
        return count(s,0);
    }
    
  
    
    int count(string &s,int i){
        if(i>=s.size())
            return 1;
        
        int &ret= dp[i];
        if(ret!= -1)
             return ret;
        ret=0;
        if(s[i]!='0')
           ret = count(s, i+1);
        
        if( (s[i] == '2' && (s[i+1]>='0' && s[i+1] <='6')) || (s[i] == '1' && i<s.size()-1)){
            
            ret += count(s,i+2);
        }
        
        return ret;
        
        
    }
};