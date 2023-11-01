// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {

//         vector<int> data(n+1 , 0);

//         //M : what if n = 1 , only 1 person
//         if(n == 1){
//             return 1;
//         }
//         for(auto val : trust){
//             int first= val[0];
//             int second = val[1];
//             data[first]--;
//             data[second]++;
//         }
//         for(int i = 1 ; i <= n ; i++){
//             int val = data[i];
//             if(val == n -1  ){
//                 return i;
//             }
//         }
//         return -1;

//     }
// };