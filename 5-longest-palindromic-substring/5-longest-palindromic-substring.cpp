class Solution {
public:
    string longestPalindrome(string s) {

        
    const int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
    string ret;
        int cnt=0;
        int ans=0;
        for(int len=1;len<=n;len++){
            
            for(int st=0;st<n-len+1;st++){
                int en = st+len-1;
                
                if(s[st]==s[en])
                {    
                    if(st==en || st+1 == en){
                        dp[st][en]=1;
                    }else{
                        dp[st][en]=dp[st+1][en-1];
                    }
                }
                
                 if(dp[st][en]){
                     if(ans<len){
                         ans=len;
                     ret= s.substr(st,len);
                     }
                 }  
                    
            }}
                 
         return ret;    
}

};
