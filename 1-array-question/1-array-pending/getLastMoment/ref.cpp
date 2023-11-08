// class Solution {
// public:
//     int getLastMoment(int n, vector<int>& left, vector<int>& right) {
//         int maxi = INT_MIN;

//         for(int i:left){
//             maxi = max(i, maxi);
//         }

//         for(int i:right){
//             maxi = max(n-i, maxi);
//         }
//         return maxi;
//     }
// };