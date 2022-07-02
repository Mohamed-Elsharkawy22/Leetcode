class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        
        const int n=s.size();
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='('|| s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else{
                if(st.empty()) return 0;
                
                char top=st.top();
                if(top=='('&&s[i]!= ')' || 
                   top =='{' && s[i]!='}'||
                  top == '[' && s[i]!=']')
                    return 0;
                else
                    st.pop();
                
            }
        }
        
        return st.empty();
    }
};