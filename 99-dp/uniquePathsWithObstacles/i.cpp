// class Solution {
// public:
    
//     int m,n;
//     int t[101][101];
//     int helper(vector<vector<int>>& Grid, int i, int j)
//     {
//         if( (i >= m)||(j >= n)|| Grid[i][j] == 1)
//         {
//             return 0;
//         }
//         if(t[i][j] != -1)
//             return t[i][j];
        
//         if(i == m-1 && j == n-1)
//             return 1;
        
//         int right = helper(Grid,i+1,j);
//         int down = helper(Grid,i,j+1);
        
//         return t[i][j] = right + down;
//     }
    
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         m = obstacleGrid.size();
//         n = obstacleGrid[0].size();
        
//         memset(t, -1, sizeof(t));
        
//         return helper(obstacleGrid, 0, 0);
//     }
// };