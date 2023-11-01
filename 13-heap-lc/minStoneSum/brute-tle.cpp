// class Solution {
// public:
//     int minStoneSum(vector<int>& piles, int k) {
//         sort(piles.begin() , piles.end());
//         int n = piles.size() - 1;
//         while(k > 0){
//             int data = 0;
//             if(piles[n] & 1){
//                 data = piles[n]/2 + 1;
//             }else{
//                 data = piles[n]/2;
//             }
//             piles[n] = data;
//             sort(piles.begin() , piles.end());

//             k--;
//         }

//         int res = 0;
//         for(auto v : piles){
//             cout << v <<" ";
//             res += v;
//         }
//         return res;
//     }
// };