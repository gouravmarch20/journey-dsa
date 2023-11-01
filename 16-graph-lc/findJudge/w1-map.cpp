// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {

//         vector<int> t(n+1 , 0);
//         unordered_map <int ,int> umap;
//         //M : what if n = 1 , only 1 person
//         if(n == 1){
//             return 1;
//         }
//         for(auto val : trust){
//             int first= val[0];
//             int second = val[1];
//             umap[first]--;
//             umap[second]++;
//         }
//         for(auto it : umap){
//             if(it.second == n - 1){
//                 return it.first;
//             }
//         }
//         return -1;

//     }
// };