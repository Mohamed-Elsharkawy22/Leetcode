class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        const int n=numbers.size();
        int st=0,en=n;
        
        for(int i=0;i<n;i++){
              st=i+1, en=n-1;
            while(st<=en){
                int md=st+(en-st)/2;
                
                if(target-numbers[i]==numbers[md]){
                    return vector<int>{i+1, md+1};
                }else if(target-numbers[i] > numbers[md]){
                    st=md+1;
                }else{
                    en=md-1;
                }
            }
            
            
            
            
        }
        
        return vector<int>();
        
    }
};