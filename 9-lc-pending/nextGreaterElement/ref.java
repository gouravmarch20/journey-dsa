// class Solution {
//     public HashMap<Integer,Integer> nextGreater(int[] nums){
//         int n=nums.length;
//         HashMap<Integer,Integer> h=new HashMap<>();
//         Stack<Integer> st=new Stack<>();
//         int[] res=new int[n];
//         res[n-1]=-1;
//         h.put(nums[n-1],-1);
//         st.push(nums[n-1]);
//         for(int i=n-2;i>=0;i--){
//             while(st.size()!=0 && st.peek()<nums[i]){
//                 st.pop();
//             }
//             if(st.size()==0) res[i]=-1;
//             else res[i]=st.peek();
//             h.put(nums[i],res[i]);
//             st.push(nums[i]);
//         }
//         return h;
//     }
//     public int[] nextGreaterElement(int[] nums1, int[] nums2) {
//         HashMap<Integer,Integer> res=nextGreater(nums2);
//         int[] ans=new int[nums1.length];
//         for(int i=0;i<nums1.length;i++){
//             ans[i]=res.get(nums1[i]);
//         }
//         return ans;
//     }
// }