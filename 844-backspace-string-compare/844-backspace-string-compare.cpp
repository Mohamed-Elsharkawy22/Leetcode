class Solution {
public:

    
    string solve(string s){
        
        stack<int>st;
        for(int i=0;i<s.size();i++){
            
            if(!st.empty() && s[i]=='#')
                st.pop();
           
              if(s[i]!='#') st.push(s[i]);
        }
        string ans ="";
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        
        return ans;
    }
    
    
    
    bool backspaceCompare(string s, string t) {
       
        return solve(s)==solve(t);
        
    }
};