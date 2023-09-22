// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         map<int,int>hash;
//         vector<int>res;
//         for(int i=0;i<arr1.size();i++)
//         hash[arr1[i]]++;
//         for(int i=0;i<arr2.size();i++)
//         {
//             auto itr = hash.find(arr2[i]);
//             int key = itr->first;
//             int val = itr->second;
//             while(val--)
//             {
//                 res.push_back(key);
//             }
//             hash.erase(itr);
//         }
//         for(auto itr:hash)
//         {
//             int key = itr.first;
//             int val = itr.second;
//             while(val--)
//             {
//                 res.push_back(key);
//             }
//         }
//         return res;
//     }
// };