class Solution {
public:
    bool isPalindrome(string s) {
      const int n=s.size();
        
        string sNew="";
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0'&&s[i]<='9') )
               sNew.push_back(s[i]);
            else if((s[i]>='A' && s[i]<='Z')){
                sNew.push_back(s[i]-'A'+'a');
            }
        }
       
       int pt1=0,pt2=sNew.size()-1;
        while(pt1<=pt2){
            if(sNew[pt1] != sNew[pt2]) return 0;
            pt1++,pt2--;
        }
        
        return 1;
    }
};