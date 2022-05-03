class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        const int n=nums.size();
        stack<int>st;
       int first=n;
        
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                first=min(first, st.top());
                st.pop();
            }
          st.push(i);           
        }
        
        
         while(!st.empty()){
             st.pop();
         }
        
        int lst=-1;
           for(int i=n-1;i>=0;--i){
            while(!st.empty() && nums[st.top()] < nums[i]){
               lst=max(lst, st.top());
                st.pop();
            }
        st.push(i);
        }

    return lst>first?lst-first+1:0;
    
    }
};



    