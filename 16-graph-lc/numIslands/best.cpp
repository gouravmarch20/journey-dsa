// class Solution {
// public:
//     bool isValid(int i , int j , int m , int n , vector<vector<char>>& grid){
//         //^AddressSanitizer  grid[m][n] wrote --> i , j need to write
//         if(i >= 0 && j >= 0 && i < m && j < n && grid[i][j] == '1'){
//             return true;
//         }
//         return false;
//     }
//     void recNumIslands(int i , int j , int m , int n , vector<vector<char>>& grid){
//         grid[i][j] = '0';//^ char type not number 
//         //up
//         if(isValid(i-1 , j , m , n , grid)){
//             recNumIslands(i-1 , j , m , n , grid);
//         }
//         //down
//         if(isValid(i+1 , j , m , n , grid)){
//             recNumIslands(i+1 , j , m , n , grid);
//         }
//         //left
//         if(isValid(i , j -1  , m , n , grid)){
//             recNumIslands(i , j -1  , m , n , grid);
//         }
//         //right
//          if(isValid(i , j + 1  , m , n , grid)){
//             recNumIslands(i , j+ 1  , m , n , grid);
//         }

//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         int count = 0;
//         for(int i = 0 ; i < m  ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(grid[i][j] == '1'){
//                 count++;
//                 recNumIslands(i , j , m , n , grid);
//                 }
//             }
//         }
//         return count;
//     }
// };