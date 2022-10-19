class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> count;
        priority_queue<pair<int,string>>pq;
        for(int i=0;i<words.size();i++)
            count[words[i]]++;
        
        for(auto &it: count)
        {
           if(pq.size() < k)
           {
               pq.push({-1*it.second, it.first });
           }else if(-1*it.second <= -1*count[pq.top().second]){
               if(-1*it.second == -1*count[pq.top().second] && pq.top().second <= it.first )
                    continue;
               pq.pop();
               pq.push({-1*it.second, it.first });
           } 
           
        }
        
        vector<string>ans;
        while(!pq.empty())
            ans.push_back(pq.top().second), pq.pop();
        
        reverse(ans.begin(), ans.end());
       
        return ans;
        
    }
};