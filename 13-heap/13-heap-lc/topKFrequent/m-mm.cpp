// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         map<int,int> mp;
//         for(auto val : nums){
//             mp[val]++;
//         }
////^         multimap <int, int , greater <int>> mm;//stuck
//         multimap <int, int , greater <int>> mm;
//         for(auto val : mp){
//             mm.insert({val.second , val.first});
//         } 
//         vector <int> v;
//         for(auto it = mm.begin() ; it != mm.end() && k > 0 ; it++){
////!             v.push_back(it.second);//pointer mai dot use 
//             v.push_back(it->second);
//             k--;
//         }
//         return v;
//     }
// };