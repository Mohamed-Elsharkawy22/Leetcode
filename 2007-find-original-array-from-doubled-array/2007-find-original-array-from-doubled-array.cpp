class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
     
        int cnt=0;
        vector<int>ans;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<changed.size();i++)
            mp[changed[i]]++;
        sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++){
            if(mp[changed[i]] >0 && mp[changed[i]*2]>0){
                
                if(changed[i]==0 && mp[changed[i]] < 2) continue;
                   cnt += 2;
                   mp[changed[i]]--;
                   mp[changed[i]*2]--;
                   ans.push_back(changed[i]); 
            }
        }
    if(cnt != changed.size())
         return vector<int>();
    
    
        return ans;
    }
};



  
 
  
    