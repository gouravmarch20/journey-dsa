// class Solution {
//     public int findTheWinner(int n, int k) {
//         if(k==1) return n;
//         Queue<Integer> dq=new ArrayDeque<>();
//         for(int i=1;i<=n;i++){
//             dq.add(i);
//         }
//         while(dq.size()!=1){
//             for(int i=1;i<k;i++){
//                 dq.add(dq.remove());
//             }
//             dq.remove();
//         }
//         return dq.peek();
//     }
// }