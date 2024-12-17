// class Solution {
//   // equal to case
//  public:

//      vector<int> cleanCode(vector<int>& nums) {
//         int np = 0 ; 
//         int pp = 0; 
//         int n = nums.size();
//         vector<int> ans;
   
//         //^ m1:: i range 
//         //^ m2 :: while loop stop np < n ==> ignore upper logic --> 1 step ahead

//         for(int i = 0 ; i < (n / 2) ; i++){
//             while (nums[pp] < 0  ) pp++;
//             while(  nums[np] > 0 ) np++;
            
//             ans.push_back(nums[pp++]);
//             ans.push_back(nums[np++]);
            
//         }
//         return ans;
//     }
// };
//   vector<int> firstTime(vector<int>& nums) {
//     int np = 0;
//     int pp = 0;
//     int n = nums.size();
//     vector<int> ans;
//     //? kind of sliding window look :: first positive index
//     while (nums[np] > 0) {
//       np++;
//     }
//     while (nums[pp] < 0) {
//       pp++;
//     }
//     //^ m1:: i range
//     //^ m2 :: while loop stop np < n ==> ignore upper logic --> 1 step ahead

//     for (int i = 0; i < (n / 2); i++) {
//       cout << i << " " << pp << " " << np << endl;
//       ans.push_back(nums[pp++]);
//       ans.push_back(nums[np++]);
//       //?  second to n  positive index

//       while (pp < n && nums[pp] < 0) {
//         pp++;
//       }
//       while (np < n && nums[np] > 0) {
//         // cout << np << " ";
//         np++;
//       }
//     }
//     return ans;
//   }

//   vector<int> rearrangeArray(vector<int>& nums) {
//     firstTime(nums);
//     cleanCode(nums);
//   }
// };