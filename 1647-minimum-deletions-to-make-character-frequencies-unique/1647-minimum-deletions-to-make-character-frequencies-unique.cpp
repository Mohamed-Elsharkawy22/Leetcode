class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map<char,int>mpToFreq;
        unordered_map<int,int>countFreq;
        
        for(int i=0;i<s.size();i++){ //n
            mpToFreq[s[i]]++;
        }
        for(pair<char, int>val: mpToFreq){ // 26
             countFreq[ mpToFreq[val.first] ]++;
        }
        
        int cnt=0;
        for(pair<char,int> val: mpToFreq){ // < 26*n
           // cout<<"ff "<<(char)val.first<<endl;
            while( mpToFreq[val.first]>0 && countFreq[ mpToFreq[val.first] ] > 1){
                
               // cout<<(char)val.first<<endl;
                countFreq[ mpToFreq[val.first]]--;
                mpToFreq[val.first]--; 
                countFreq[ mpToFreq[val.first]]++;
                cnt++;
            }
            
        }
        return cnt;
    }
};