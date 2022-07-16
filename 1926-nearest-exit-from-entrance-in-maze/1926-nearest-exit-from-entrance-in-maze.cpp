class Solution {
public:
    bool isSafe(int row, int col, int rows, int cols){
        return row >= 0 && row < rows && col >= 0 && col < cols;
    }
    
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int rows = maze.size();
        int cols = maze[0].size();
        
        queue<vector<int>> bfs;
        vector<int> temp{0, entrance[0], entrance[1]};
        maze[entrance[0]][entrance[1]] = '#';
        bfs.push(temp);
        
        vector<pair<int, int>> moves{make_pair(1, 0), make_pair(-1, 0), make_pair(0, 1), make_pair(0, -1)};
        
        while(!bfs.empty()){
            vector<int> temp = bfs.front();
            bfs.pop();
            int row = temp[1];
            int col = temp[2];
            int dist = temp[0];
            
            if(col == 0 || col == cols - 1 || row == 0 || row == rows - 1){
                if(row != entrance[0] || col != entrance[1]){
                    return dist;
                }
            }
            
            for(auto mov : moves){
                int adjRow = row + mov.first;
                int adjCol = col + mov.second;
                
                if(isSafe(adjRow, adjCol, rows, cols) && maze[adjRow][adjCol] == '.'){
                    maze[adjRow][adjCol] = '#';
                    vector<int> temp{dist + 1, adjRow, adjCol};
                    bfs.push(temp);
                }
            }
        }
        
        return -1;
    }
};