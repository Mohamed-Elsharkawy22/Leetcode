class Solution {
public:
    int minDeletions(string s) {
        
        map<char,int>mpToFreq;
        map<int,int>countFreq;
        
        for(int i=0;i<s.size();i++){
            mpToFreq[s[i]]++;
        }
        for(pair<char, int>val: mpToFreq){
             countFreq[ mpToFreq[val.first] ]++;
        
        }
        
        int cnt=0;
        for(pair<char,int> val: mpToFreq){
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