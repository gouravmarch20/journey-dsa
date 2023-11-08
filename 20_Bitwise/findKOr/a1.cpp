// class Solution {
// public:
//     int first(vector<int>& nums, int k) {
//         int ans = 0;
//         // count set bit 
//         for(int i = 0 ; i < 32 ; i++ ){
//             int count = 0; 
//             // of all nums in array --> 
//             for(auto el : nums){
//                 // if((el & (1<<i) ))
//  //L: pow return float type so typecase => int -> if range 2^32 -> then long , int64_t will work 
//                 if((el & int64_t(pow(2,i)) ))
//                     count++;
//             }
//             // when ever  i bit count equal or more than k 
//             if(count >= k){
//                 ans += (1<<i);// include that bit value in answer  
//             }
//         }
//         return ans;
//     }
//     int clean(vector<int>& nums, int k) {
//         int ans = 0;
//         for(int i = 0 ; i < 32 ; i++ ){
//             int count = 0; 
//             for(auto el : nums){
//                 if((el & (1<<i) ))
//                     count++;
//             }
//             if(count >= k){
//                 ans += (1<<i);
//             }
//         }
//         return ans;
//     }

//     int findKOr(vector<int>& nums, int k) {
//        first(nums , k );//deeply explained
//        clean(nums , k);
//     }

// };