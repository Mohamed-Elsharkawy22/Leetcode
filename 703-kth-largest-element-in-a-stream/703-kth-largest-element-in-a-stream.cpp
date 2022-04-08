class KthLargest {
public:
    priority_queue<int>pq;
    int gk;
    KthLargest(int k, vector<int>& nums) {
        gk=k;
        for(int i=0;i<nums.size();i++){
          
            if(pq.size()<k)
               pq.push(-1*nums[i]);
            else{
                if(nums[i] > -1*pq.top()){
                    pq.pop();
                    pq.push(-1*nums[i]);
                }
            }
        }
    }
    
    int add(int val) {
          if(pq.size()<gk)
               pq.push(-1*val);
            else{
                if(val > -1*pq.top()){
                    pq.pop();
                    pq.push(-1*val);
                }
            }
        return -1*pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */