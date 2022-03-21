class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
       
        const int n=tops.size();
        int swaps=0,
        minSwaps=INT_MAX;
        
        
        
        for(int i=1;i<=6;i++){
            int j=0;
            swaps=0;
            
           for(;j<n;j++){
              if(tops[j]==i) continue;
               else if(bottoms[j]==i) swaps++;
                else break;
            }
            
            if(j==n)
                minSwaps=min(minSwaps, swaps);   
        }
        
        for(int i=1;i<=6;i++){
            int j=0;
            swaps=0;
            for(;j<n;j++){
              if(bottoms[j]==i) continue;
               else if(tops[j]==i) swaps++;
                else break;          
            }
            
            if(j==n)
                minSwaps=min(minSwaps, swaps);   
        }
        
        

        return (minSwaps!=INT_MAX)?minSwaps:-1;
        
        
    }
};