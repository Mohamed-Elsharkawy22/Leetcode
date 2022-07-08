class Solution {
    public:
 int findKthPositive(vector<int> &arr, int k) {
          unordered_set<int>st;
     
     for(int i=0;i<arr.size();i++) st.insert(arr[i]);
     int it=1;
     while(k>0){
         if(st.count(it)==0){
             k--;
             if(k==0) return it;
         }
             it++;
     }
     
     return -1;
     

  }
};