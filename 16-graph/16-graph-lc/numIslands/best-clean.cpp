// class Solution {
// public:
//     void recNumIsIsland(int i , int j , vector<vector<char>>& grid ){
//         if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() ){
//             return ;
//         }
//         if(grid[i][j] == '0'){
//             return ;
//         }
//         //!grid[i][j] == '0';//M AddressSanitizer:DEADLY SIGNAL::double =

//         grid[i][j] = '0';

//         recNumIsIsland(i+1 , j , grid);
//         recNumIsIsland(i-1 , j , grid);

//         recNumIsIsland(i , j + 1, grid);
//         recNumIsIsland(i , j - 1, grid);

//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int count = 0;
//         for(int i = 0 ; i < grid.size() ; i++){
//             for(int j = 0 ; j < grid[0].size(); j++ ){
//                 if(grid[i][j] == '1'){
//                     recNumIsIsland(i , j , grid);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };