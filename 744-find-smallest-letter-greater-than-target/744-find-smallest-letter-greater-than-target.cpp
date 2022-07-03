class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int lo=0, hi=letters.size()-1;
        
        while(lo<hi){
            
            int mid=lo+(hi-lo)/2;
            
            if(letters[mid]>target)
                hi=mid;
            else
                lo=mid+1;
            
        }
        
        if(letters[lo]>target)
            return letters[lo];
        else{
            return letters[0];
        }
        
    }
};