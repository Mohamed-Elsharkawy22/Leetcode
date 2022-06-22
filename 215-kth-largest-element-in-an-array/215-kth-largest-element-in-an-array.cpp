class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      
        priority_queue<int>pq;
        
        const int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            if(pq.size()<k){
                pq.push(-1*nums[i]);
                continue;
            }
            
            if(pq.size()==k){
                if(-1*pq.top() < nums[i]){
                    pq.pop();
                    pq.push(-1*nums[i]);
                }
            }
       
        }
        
        return pq.top()*-1;
        
        
    }
};

    
