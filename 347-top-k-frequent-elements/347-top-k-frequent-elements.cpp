class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<nums.size();i++){
            
            if(mp[nums[i]]>0 && pq.size()<k){
               pq.push({-1*mp[nums[i]],nums[i]});
                mp[nums[i]]=0;
            }else{
               if ( mp[nums[i]]>0  && -1*pq.top().first < mp[nums[i]] ){
                   pq.pop();
                   pq.push({-1*mp[nums[i]],nums[i]});
                    mp[nums[i]]=0;
               } 
                
            }
        }
        
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};