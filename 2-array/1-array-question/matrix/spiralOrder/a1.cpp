// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int count = 0 ;
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int endRow = m - 1;
//         int endCol = n - 1;
//         int startRow = 0;
//         int startCol = 0;
//         int totalElement = m * n ;

//         while(count < totalElement){
//             // col is changing --> so i will varry acc to it
//             //^ wrote i = 0 fix assuming
//             for(int i = startCol ; i <=  endCol && count < totalElement ; i++){
//                 ans.push_back(matrix[startRow][i]);
//                 count++;
//             }
//             startRow++;
//             //print lastCol ::  row changing , col same
//             for(int i = startRow ; i <= endRow && count < totalElement ; i++){
//                 ans.push_back(matrix[i][endCol]);
//                 count++;
//             }
//             endCol--;
//             //print lastRow ::  row same , col changing
//             //! have limit of startCol not startRow
//             for(int i = endCol ; i >= startCol && count < totalElement ; i--){
//                 ans.push_back(matrix[endRow][i]);
//                 count++;
//             }
//             endRow--;
//             //^  consider equal , allready ++ 
//             for(int i = endRow ; i >= startRow && count < totalElement ; i--){
//                 ans.push_back(matrix[i][startCol]);
//                 count++;
//             }
//             startCol++;
//         }
//         return ans;
//     }
// };