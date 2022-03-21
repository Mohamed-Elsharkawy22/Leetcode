class Solution {
public:
    int scoreOfParentheses(string s) {
     
        int numberOfNotClosed=0;
        const int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            
            if(s[i]=='(')
                numberOfNotClosed++;
            else{
                numberOfNotClosed--;
                
                if(s[i-1]=='(')
                    ans+= 1<<numberOfNotClosed;
                
            }   
        }
        
        return ans;
        
        
        
        
    }
};


