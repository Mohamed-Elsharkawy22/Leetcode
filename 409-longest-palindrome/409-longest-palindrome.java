class Solution {
    public int longestPalindrome(String s) {
        /*
        ccc ---  3
        aabbbb -- 6
        abc 1
        a aa bbbb 7
        */
        int[] count = new int[128];
        
        
        for(char c : s.toCharArray())
            count[c]++; 
        
        int ans=0;
        
        for(int i=0;i<128;i++){
            ans += (count[i]/2) *2;
            
            if(ans % 2 == 0 && count[i]%2 !=0) ans++;
        }
         
        return ans;
    }
}