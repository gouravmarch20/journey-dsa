// class Solution {
// public:
    
    
//     int minimumMoves(vector<vector<int>>& grid) {
        
//         bool basecase = false;
//         for(int i=0; i<3; i++){
//             for(int j=0; j<3; j++){
//                 if(grid[i][j]!=1){
//                     basecase = true;
//                     break;
//                 }
                    
//             }
//         }
        
//         if(!basecase)
//             return 0;
        
//         int result = 1e9+7;
//         for(int i=0; i<3; i++){
//             for(int j=0; j<3; j++){
                
//                 for(int x=0; x<3; x++){
//                     for(int y=0; y<3; y++){
                        
//                         if(grid[i][j] == 0 and grid[x][y]>1){
//                             grid[x][y]--;
//                             grid[i][j]++;
                            
//                             int dis = abs(x-i) + abs(y-j);
//                             result = min(result , dis+minimumMoves(grid));
                            
//                             grid[x][y]++;
//                             grid[i][j]--;
//                         }
                        
//                     }
//                 }
//             }
//         }
        
//         if(result == 1e9+7)
//             return 0;
//         return result;
//     }
// };