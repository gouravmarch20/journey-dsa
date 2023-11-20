// class Solution {
// public:
//     int findInSecondArray(int target, vector<int>& nums2){//^ m1 function params mistake
//       for(int i = 0 ; i < nums2.size() ; i++){
//         if(nums2[i] == target){
//           return i;
//         }
//       }
//       return -1;
//     }
//     int findNextGreater(int target , int indexNum2 ,vector<int>& nums2){
//       for(int i = indexNum2 ; i < nums2.size() ; i++){
//         if(nums2[i] > target){
//           return nums2[i];//^^ m2 return nums[2]
//         }
//       }
//       return -1;
//     }
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector <int> ans(nums1.size() , -1);
//         for(int i = 0 ; i < nums1.size() ; i++){
//               int indexNums2 = findInSecondArray(nums1[i] , nums2);
//               if(indexNums2 != -1){
//                 int res = findNextGreater(nums1[i] , indexNums2 , nums2  );
//                 ans[i] = res;
//               }
//         }
//         return ans;
//     }
// };