// class Solution {
// public:
   
//     long long minSum(vector<int>& nums1, vector<int>& nums2) {
//         long long int low=1,high=1e12;
//         long long int ans=-1;
//          long long int sum1=0,zero1=0,sum2=0,zero2=0;
//         for(auto it:nums1)
//         {
//             if(it==0)
//                 zero1++;
//             sum1+=it;
//         }
//         for(auto it:nums2){
//             if(it==0)
//                 zero2++;
//             sum2+=it;
//         }
//         if(zero1==0 && zero2==0)
//         {
//             if(sum1==sum2)
//                 return sum1;
//             else
//                 return -1;
//         }
//         else if(zero1==0)
//         {
//             if(sum1<sum2+zero2)
//                 return -1;
//             else
//                 return sum1;
//         }
//         else if(zero2==0)
//         {
//             if(sum2<sum1+zero1)
//                 return -1;
//             else
//                 return sum2;
//         }
//         else
//         {
//             return max(sum1+zero1,sum2+zero2);
//         }
       
        
//     }
// };