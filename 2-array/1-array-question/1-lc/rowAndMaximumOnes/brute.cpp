// class Solution {
// public:
//     vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//         int rowNo = 0;
//         int countOne = 0;
//         vector<int> ans;
//         for(int i = 0 ; i < mat.size() ; i++){
//             int tempCount = 0;
//             for(int j = 0 ; j < mat[0].size() ; j++){
//                 if(mat[i][j] == 1){
//                     tempCount++;
//                 }
//             }
//             if(tempCount > countOne){
//                 countOne = tempCount;
//                 rowNo = i;
//             }
//         }
//         ans.push_back(rowNo);
//         ans.push_back(countOne);
//         return ans;
//     }
// };