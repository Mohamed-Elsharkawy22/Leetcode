
class Solution {
public:
    int countSubstrings(string s) {
   
        int count=0; 
        
        for(int i=0;i<s.size();i++){
            expandAroundCenter(s,i,i,count);
            expandAroundCenter(s,i,i+1,count);

        }
        
    return count;
    }
    
    void expandAroundCenter(string &s,int left, int right, int &count){
        int l=left,r=right;
        
        while(l>=0 && r<s.size() && s[l]==s[r]){
            count++;
        l--;
        r++;    
        }
    }
    
    
    
};