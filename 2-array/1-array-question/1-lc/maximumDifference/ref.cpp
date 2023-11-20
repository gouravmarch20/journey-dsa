// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> maxi(n);
//         maxi[n-1] = nums[n-1];

//         for(int i=n-2; i>=0; i--){
//             maxi[i] = max(maxi[i+1], nums[i]);
//         }

//         int answer = -1;
//         for(int i=0; i<n; i++){
//             answer = max(answer, maxi[i]-nums[i]);
//         }

//         return answer != 0? answer: -1;
//     }
// };