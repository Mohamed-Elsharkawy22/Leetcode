class Solution {
public:
    bool isValid(string s) {
        if(s=="")
            return 1;
        int idx=s.find("abc");
        if(idx!=-1){
            return isValid(s.substr(0,idx)+s.substr(idx+3,(int)s.size()-idx-3));
        }else{
            return 0;
        }
    }
};