class Solution {
public:
    string intToRoman(int num) {
    map<int, string> mp;
    mp[-1]="I";
    mp[-5]="V";
    mp[-10]="X";
    mp[-50]="L";
    mp[-100]="C";
    mp[-500]="D";
    mp[-1000]="M";
    mp[-9]="IX";
    mp[-4]="IV";
    mp[-40]="XL";
    mp[-90]="XC";
    mp[-400]="CD";
    mp[-900]="CM";    
        
      
    string ans="";
        
        int cnt=0;
        for(auto &item : mp){ 
            while(-1*item.first <= num ){
                num-= -1*item.first;
                ans+= mp[item.first];
            }
        }
        
        return ans;
        
    }
};