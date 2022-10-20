class Solution {
    private:
     int nums [13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
     string romans [13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X","IX", "V", "IV", "I"};
public:
    string intToRoman(int num) {
       
      
    string ans="";
        
        int cnt=0;
        for(int i=0;i<13;i++){ 
            while(nums[i] <= num ){
                num-= nums[i];
                ans.append(romans[i]);
            }
        }
        
        return ans;
        
    }
};