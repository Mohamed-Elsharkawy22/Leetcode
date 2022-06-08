class Solution {
public:
    int removePalindromeSub(string s) {
     
        int st=0,end=s.size()-1;
        while(st<end){
            if(s[st++] != s[end--]){
                return 2;
            }
        }
        return 1;
    }
};