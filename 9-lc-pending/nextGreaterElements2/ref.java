// class Solution {
//     public int[] nextGreaterElements(int[] nums) {
//         int n=nums.length;
//         int[] res=new int[n];
//         Stack<Integer> st=new Stack<>();

//         for(int i=n-1;i>=0;i--){
//             st.push(nums[i]);
//         }
//         for(int i=n-1;i>=0;i--){
//             while(st.size()>0 && nums[i]>=st.peek()){
//                 st.pop();
//             }
//             if(st.size()==0) res[i]=-1;
//             else res[i]=st.peek();
//             st.push(nums[i]);
//         }
//         // for(int i=n-1;i>=0;i--){
//         //     res[i]=-1;
//         //     for(int j=(i+1)%n;j<n;j++){
//         //         if(nums[j]>nums[i]){
//         //             res[i]=nums[j];
//         //             break;
//         //         }
//         //         else if(i+1<n && nums[i]<res[i+1]){
//         //             res[i]=res[i+1];
//         //             break;
//         //         }
//         //     }
//         // }
//         return res;
//     }
// }