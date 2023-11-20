// class Solution {
//     public int[] moveZeros(int[] nums){
//         int idx=-1;
//         for(int i=0;i<nums.length;i++){
//             if(nums[i]==0){
//                 idx=i;
//                 break;
//             }
//         }
//         if(idx!=-1){
//             for(int i=idx+1;i<nums.length;i++){
//                 if(nums[i]!=0){
//                     int temp=nums[i];
//                     nums[idx++]=temp;
//                     nums[i]=0;
//                 }
//             }

//         }
//         return nums;
//     }
//     public int[] applyOperations(int[] nums) {
//         int n=nums.length;
//         for(int i=0;i<n-1;i++){
//             if(nums[i]==nums[i+1]){
//                 nums[i]*=2;
//                 nums[i+1]=0;
//                 i++;
//             }
//         }
//         return moveZeros(nums);
//     }
// }