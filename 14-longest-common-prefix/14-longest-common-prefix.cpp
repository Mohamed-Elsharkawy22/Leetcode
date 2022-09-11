class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans ="";

        
         for(int j=0; j<strs[0].size();j++){
                ans.push_back(strs[0][j]);
             bool fd=0;
             for(int i=1;i<strs.size();i++)
             {
                 if(ans[j] != strs[i][j])
                 {
                     ans.pop_back();
                     fd=1;
                     break;
                 }
             }
             if(fd)
                break;
            }
        
        
        
        return ans;
        
    }
};