class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        const int n=courses.size();
        
      
        
        sort(courses.begin(), courses.end(),[](vector<int>v1,vector<int>v2 ){
           return v1[1]<v2[1]; 
        });
         
        priority_queue<int>pq;
        
        int day=0;
        
          for(int i=0;i<n;i++){        
            
              if(day+courses[i][0] <= courses[i][1]){
                  
                  pq.push(courses[i][0]);
                  
                  day += courses[i][0];
                  
              }else{
                  if(pq.empty() || courses[i][0] >= pq.top()) continue;
                  
                  day -= pq.top();
                  pq.pop();
                  
                  day += courses[i][0];
                  pq.push(courses[i][0]);
              }
              
          }
    
        
        
        return pq.size();
    }
    
    
    
    
};