class Solution {
public:
    int maximum69Number (int num) {
        string m = to_string(num);
        
        
        for(int i=0;i<m.size();i++)
            if(m[i]=='6'){
                m[i]='9';
                break;
            }
    
    return stoi(m);
    }
};