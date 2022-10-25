class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i = 0; i < grid.size(); i++)
           for(int j = 0; j < grid[0].size(); j++)
              if(grid[i][j] == 1) ans = max(ans, BFS(grid, i, j));
        
    return ans;
}
    
   int BFS(vector<vector<int>>& dist, int i, int j){
    if( i >= 0 and i < dist.size() and j >= 0 and j < dist[0].size() and dist[i][j]){
        dist[i][j] = 0;
        return BFS(dist, i + 1, j) + BFS(dist, i - 1, j) + BFS(dist, i, j - 1) +
               BFS(dist, i, j + 1) + 1;
     }
    return 0;
  }
    
};