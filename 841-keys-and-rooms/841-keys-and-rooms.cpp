class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        set<int> s;
        deque<int> q;
        q.push_back(0);
        s.insert(0);
        
        int n = rooms.size();
        
        while(!q.empty()){
            int curr = q.front();
            q.pop_front();
            
            for(int i=0;i<rooms[curr].size();i++){
                if(s.count(rooms[curr][i])==0){
                    q.push_back(rooms[curr][i]);
                    s.insert(rooms[curr][i]);
                }
            }
            
        }
        
        if(s.size()==n){
            return true;
        }
        
        return false;
    }
};