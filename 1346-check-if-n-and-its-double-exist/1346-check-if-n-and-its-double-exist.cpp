class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
     unordered_map<int,int>lookup;
        
        for(int i=0;i<arr.size();i++){
            if(lookup.count(2*arr[i])!=0 || (arr[i]%2==0&&lookup.count( arr[i]/2)!=0)){
                return true;
            }
            lookup[arr[i]]++;
        }
        
        return false;
    }
};