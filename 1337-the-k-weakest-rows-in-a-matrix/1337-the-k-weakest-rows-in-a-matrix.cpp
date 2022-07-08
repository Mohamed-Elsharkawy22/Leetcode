class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[i].size();j++){
                cnt += mat[i][j]==1;
            }
            if(pq.empty()|| pq.size() < k || pq.top().first > cnt){
                if(pq.size()==k)
                    pq.pop();
                pq.push({cnt,i});
            
            }
        }
        
         vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
                
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};