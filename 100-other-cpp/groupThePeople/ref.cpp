// class Solution {
// public:
//     vector<vector<int>> groupThePeople(vector<int>& groupSizes) {

//         unordered_map<int, vector<int>> m1;

//         vector<vector<int>> ans;

//         for (int i = 0; i < groupSizes.size(); i++) {
//             m1[groupSizes[i]].push_back(i);
//         }

//         for (auto i : m1) {
//             vector<int> temp;
//             int cnt = 0;  
//             for (auto j : i.second) {
//                 temp.push_back(j);
//                 cnt++;

//                 if (cnt >= i.first) {
//                     ans.push_back(temp);
//                     cnt = 0; 
//                     temp.clear();  
//                 }
//             }
//         }

//         return ans;
        
//     }
// };