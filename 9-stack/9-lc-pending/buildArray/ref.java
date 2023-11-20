// class Solution {
//     public List<String> buildArray(int[] target, int n) {
//         int len=target.length;
//         List<String> al=new ArrayList<>();
//         int j=1;
//         for(int i=0;i<len;i++){
//             if(target[i]==j){
//                 al.add("Push");
//                 j++;
//             }
//             else{
//                 al.add("Push");
//                 al.add("Pop");
//                 j++;
//                 i--;
//             }
//         }
//         return al;
//     }
// }