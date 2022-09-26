class Solution {
public:
    bool backspaceCompare(string s, string t) {
     
        return newString(s)==newString(t);
        
    }
    
    string newString(string s){
        string newS="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!newS.empty())
                    newS.pop_back();
            }else
                newS.push_back(s[i]);
        }
        
        return newS;
    }
    
};