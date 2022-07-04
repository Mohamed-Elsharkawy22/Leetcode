class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> range(n);
        iota(range.begin(), range.end(), 0);
        sort(range.begin(), range.end(),
             [&ratings](int const &x, int const &y) {
                 return ratings[x] < ratings[y];
             });
        vector<int> candies(n);
       
           
        for (int i: range) {
          
            if (i > 0 && ratings[i] > ratings[i - 1]) candies[i] = candies[i - 1];
            
           if (i < n - 1 && ratings[i] > ratings[i + 1])
              candies[i] = max(candies[i], candies[i + 1]);
               
            
            candies[i]++;
        }
        return accumulate(candies.begin(), candies.end(), 0);
    }
};