class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        const int n=s.size();
        vector<int>index(26,0);
        for(int i=0;i<n;i++)
        {
            index[s[i]-'a']=i;
            
        }
        int mx=0,st=0;
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            mx=max(mx, index[s[i]-'a']);
            if(mx==i){
                ans.push_back(i-st+1);
                st=i+1;
                mx=i+1;
            }
        }
     
        
        return ans;
    }
};



