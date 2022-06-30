class Solution {
public:
    int minDeletions(string s) {
        
        int freq[26]={0};
        unordered_map<int,int>vis;
        
        
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        
       
        int cnt=0;
        for(int i=0;i<26;i++){
            if(!freq[i]) continue;
            if(!vis[freq[i]]){
             vis[freq[i]]=1;
            }else{
                while(freq[i]>0 && vis[freq[i]]) freq[i]--, cnt++;;
                
                if(freq[i]>0) vis[freq[i]]=1;
            }
            
          
            
        }
        
        return cnt;
        
    }
};