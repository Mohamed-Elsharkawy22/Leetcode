class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int numAll= 1<<k;
        const int n= (int)s.size();
        if(n<k) return 0;
        set<string>treeSet;
        for(int i=0;i<n-k+1;i++){
            string  sub = s.substr(i,k);
           treeSet.insert(sub);
        }
        
        return treeSet.size()==(1<<k);
    }
};
