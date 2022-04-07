class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int>pq;
        const int n=stones.size();
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        
        while(!pq.empty()){
            
            if(pq.size()==1) return pq.top();
            
            int v1=pq.top();
            pq.pop();
            int v2=pq.top();
            pq.pop();
            
            if(v1 > v2) 
                pq.push(v1-v2);
        }
        
        
        return 0;
        
    }
};