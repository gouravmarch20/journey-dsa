// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
//         unordered_map<int ,int> numFreq;
//         int count = 0;
//         for(auto val : nums){
//             numFreq[val]++;
//         }
//         for ( auto& entry : numFreq) {
//             int freq = entry.second;//L: one more way to acess map val
//             count += (freq * (freq - 1)) / 2;//^ natural number relation
////*L: as per loop we can easily visualize => each time one less so n*n-1/2 
////*L: total possible
////&             if  3333   , 0_index -> 3iteration_3pair , 1_index : 2 pair ,
///& 2_index :1 , 3_index : 0 ==> 3 2 1 0 ==> n * n - 1
//         }

//         return count;
//     }
// };