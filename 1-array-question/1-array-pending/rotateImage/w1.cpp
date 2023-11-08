// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         //?step 1: do transpose
//         for(int i = 0 ; i < matrix.size() ; i++){
//             for(int j = i ; j < matrix[0].size() ; j++){
//                 swap(matrix[i][j] , matrix[j][i]);
//             }
//         }
//         //? step 2 : reverse row
//         for(int i = 0 ; i < matrix.size() ; i++){
//             reverse(matrix[i].begin()  , matrix[i].end() );
//         }
//     }
// };