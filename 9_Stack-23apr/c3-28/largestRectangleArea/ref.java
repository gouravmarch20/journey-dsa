// class Solution {
//     public int[] nextSmaller(int[] nums){
//         int n=nums.length;
//         int[] res=new int[n];
//         Stack<Integer> st=new Stack<>();
//         for(int i=n-1;i>=0;i--){
//             while(st.size()>0 && nums[i]<=nums[st.peek()]){
//                 st.pop();
//             }
//             if(st.size()==0) res[i]=n;
//             else res[i]=st.peek();
//             st.push(i);
//         }
//         return res;
//     }
//     public int[] previousSmaller(int[] nums){
//         int n=nums.length;
//         int[] res=new int[n];
//         Stack<Integer> st=new Stack<>();
//         for(int i=0;i<n;i++){
//             while(st.size()>0 && nums[i]<=nums[st.peek()]){
//                 st.pop();
//             }
//             if(st.size()==0) res[i]=-1;
//             else res[i]=st.peek();
//             st.push(i);
//         }
//         return res;
//     }
//     public int largestRectangleArea(int[] heights) {
//         int[] nse=nextSmaller(heights);
//         int[] pse=previousSmaller(heights);
//         //System.out.println(Arrays.toString(nse));
//         //System.out.println(Arrays.toString(pse));
//         int maxHeight=0;
//         for(int i=0;i<heights.length;i++){
//             if((nse[i]-pse[i]-1)*heights[i]>maxHeight){
//                 maxHeight=(nse[i]-pse[i]-1)*heights[i];
//             }
//         }
//         return maxHeight;
//     }
// }