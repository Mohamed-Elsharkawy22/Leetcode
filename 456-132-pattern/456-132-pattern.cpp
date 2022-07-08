class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int thirdElement=-1e9-2;
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<thirdElement) return 1;
            while(!st.empty() && nums[i]>st.top()){
                thirdElement = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return 0;
         
    }
};
    

    
    
