// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         int timeMax = 0;
//         vector<vector<int>> visited(m , vector<int>(n , 0));
//         //!m5   queue <pair <pair<int , int> , int>> q; ==> syntax error
//         queue <pair <pair<int , int> , int>> q;//? { {r , c } , t }
//         //! m4 miss speell address sanitizer
//         for(int i = 0 ; i < m ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(grid[i][j] == 2 ){
//                     visited[i][j] = 2;
//                     q.push({{ i , j} , 0});
//                 } else if (grid[i][j] == 1){
//                     visited[i][j] = 0;
//                 }
//             }
//         }

//         //

//         int drow[] = {0, 0, 1, -1};
//         int dcol[] = {-1, 1, 0, 0};
//         // miss not equal to sign (!)
//         while(!q.empty()){
//             int r = q.front().first.first;
//             int c = q.front().first.second;
//             int t = q.front().second;
//             timeMax = max(timeMax , t);
//             q.pop();

//             for(int i = 0 ; i< 4 ; i++){
//                 int nrow = r + drow[i];
//                 int ncol = c + dcol[i];
//                 //^ m1: grid ka must 1 then only can make it rotten , visited
//                 :: already done avoid
//! m2: n , m miss-speel

//                 if(nrow < m && nrow >= 0 && ncol < n && ncol >= 0 &&
//                 grid[nrow][ncol] == 1 &&       visited[nrow][ncol] != 2){
//                     visited[nrow][ncol] = 2;
//                     //!m3 pushing r,c
//                     q.push({ {nrow , ncol } , t+1});

//                 }
//             }
//         }
//                      //? if grid mai orange found && it's not visited

//        for(int i = 0 ; i < m ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(grid[i][j] == 1 && visited[i][j] != 2){
//                     return -1;
//                 }
//             }
//         }

//         return timeMax;

// }
// };