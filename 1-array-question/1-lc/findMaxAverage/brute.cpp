// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int n = nums.size();
//         double maxi = INT_MIN;
//         for(int i = 0 ; i <= n - k ; i++){
//             int j = i ;
//             int cnt = 0;
//             double kSum = 0;
//             double kAvg = 0;
            
//             //check will j exceed
//             while(cnt < k ){
//                 kSum = kSum + nums[j];
//                 j++;
//                 cnt++;
//             }
//             cout << kSum << " ";
//             kAvg = kSum/k;
//             if(maxi < kAvg){
//                 maxi = kAvg;
//             }

//         }
//         return maxi;
//     }
// };