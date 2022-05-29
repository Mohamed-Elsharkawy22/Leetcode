class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        const int n=words.size();
        vector<int>bitMasks(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            
            for(int k=0;k<words[i].size();k++){
                int ibit=words[i][k]-'a';
                
                bitMasks[i] |= (1<<ibit);
            }
            
            for(int j=0 ;j<i;j++){
                if((bitMasks[j]&bitMasks[i])==0){
                    ans=max(ans,(int) (words[i].size()*words[j].size()));
                }
            }
            
        }
        
        return ans;
        
    }
};