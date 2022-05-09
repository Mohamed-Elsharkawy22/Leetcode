class Solution {
public:
    vector<string> letterCombinations(string digits) {
       if(!digits.size()) return vector<string>();

        
        vector<string>v{"abc","def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
     
      vector<string> ret;
        solve(0,"",digits,ret,v);
        
        return ret;
    }
    
    void solve(int i,string v ,string &digits, vector<string>&ret, vector<string> &words){
        
        if(i>= digits.size()){
            if(v.size()==i)ret.push_back(v);
            return;
        }
        int dig= digits[i]-'0';
        dig-=2;
        for(int j=0;j<words[dig].size();j++){
            
            solve(i+1,v+words[dig][j],digits,ret,words);
            
        }
        
        
    }
    
    
    
};