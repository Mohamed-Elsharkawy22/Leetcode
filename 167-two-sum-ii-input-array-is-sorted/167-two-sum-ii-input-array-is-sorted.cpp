class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        const int n=numbers.size();
        int st=0,en=n-1;
        
        while(st<en){
            
            if(numbers[st]+numbers[en]==target){
                return vector<int>{st+1,en+1};
            }else if(numbers[st]+numbers[en] > target){
                en--;
            }else{
                st++;
            }
            
        }
        
        return vector<int>();
    }
};