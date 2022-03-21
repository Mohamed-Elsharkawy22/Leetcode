class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        vector<int>top(7,0),
        bottom(7,0),
        topAndBottom(7,0);
        
        const int n=tops.size();
        
        for(int i=0;i<n;i++){
            
            top[tops[i]]++;
            bottom[bottoms[i]]++;
            
            if(bottoms[i]==tops[i]){
                topAndBottom[bottoms[i]]++;
            }
            
        }
        
        int minAns=INT_MAX, best=INT_MAX;
        
        for(int i=1;i<=6;i++){
            if(top[i]+bottom[i]-topAndBottom[i] == n){
                minAns = n-max(top[i], bottom[i]);
            }
            
            best=min(best, minAns);
        }
        
        
        return (best!=INT_MAX)?best:-1;
        
    }
};