class Solution {
public:

    int getNextValidPostion(string s, int currentPostion){
            int skips = 0;
            while(currentPostion >=0){
                if(s[currentPostion] == '#'){
                    currentPostion--;
                    skips++;
                }else if(skips>0){
                    currentPostion--;
                    skips--;
                }else{
                    break;
                }
            }
            return currentPostion;
    }

    bool backspaceCompare(string s, string t) {
     int ptr1 = s.size()-1, ptr2 = t.size()-1;

        
        while(ptr1 >= 0 || ptr2 >= 0  )  {

            ptr1 = getNextValidPostion(s, ptr1);
            ptr2 = getNextValidPostion(t, ptr2);

            if(ptr1>=0 && ptr2>=0 && s[ptr1] != t[ptr2]){
                return false;
            }

            if((ptr1<0 && ptr2>=0) || (ptr1>=0 && ptr2<0) )
                return false;

            ptr1--, ptr2--;    

        }

        return true; 
    }
};