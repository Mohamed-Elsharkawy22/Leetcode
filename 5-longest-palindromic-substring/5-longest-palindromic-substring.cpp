class Solution {
public:
    string longestPalindrome(string s) {
     int ans=0;
        int st=0,en=0;
        for(int i=0;i<s.size();i++){
          int len1=expandAroundCenter(s,i,i);
           int len2= expandAroundCenter(s,i,i+1);
            int len=max(len1,len2);
            
            if(len>ans){
                ans=len;
                st=i- (len-1)/2;
                en= i+(len/2);
            }
            
        }
        
      return s.substr(st,en-st+1);  
}
    
    int expandAroundCenter(string &s, int Left, int Right){
            int l=Left, r=Right;
            
            while(l>=0 && r<s.size()&& s[l]==s[r]){
                l--;
                r++;
            }
         /// stbbben and the actual string is bbb so len = r-l-1
            return r - l - 1 ;
        }
    

};
