class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> count;
        
        for(int i=0;i<words.size();i++)
            count[words[i]]++;
        
        
        vector<pair<int, string>>v;
        
        for(auto &it: count)
           v.push_back({it.second, it.first});
        
        sort(v.begin(),v.end(),[] (const pair<int, string>&p1, const pair<int, string>&p2){
            
            if(p1.first == p2.first)
                return p1.second<p2.second;
            
            return p1.first > p2.first;
        });
        
        
        vector<string>ans;
        for(int i=0;i<k;i++)
            ans.push_back(v[i].second);
        
        return ans;
        
    }
};