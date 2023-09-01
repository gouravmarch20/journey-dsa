// class Solution {
// public:
//     vector<vector<int>> v;
//     void solve( vector<int> can, int target,vector<int> &ans, int start){
//         if(!target){
//             v.push_back(ans);
//             return;
//         }

//         if(target<0)
//             return;

//         for(int i = start; i<can.size() && target>=can[i]; i++){
//             ans.push_back(can[i]);
//             solve(can,target-can[i],ans,i);   
//             ans.pop_back();      
//         }

//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//         vector<int> ans;
//         sort(candidates.begin(),candidates.end());
//         // long long int sum = 0;
//         solve(candidates,target,ans, 0);
//         return v;
//     }
// };