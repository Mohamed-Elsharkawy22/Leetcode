class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int start = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            
            while(st.find(s[i]) != st.end()){
                st.erase(s[start]);
                start++;
            }
            st.insert(s[i]);
            ans = max(ans, i - start + 1 );
        }

        return ans;
    }
};