// class Solution {
//     public int maxDepth(String s) {

//         int max=0,count=0;
//         for(int i=0;i<s.length();i++){
//             char ch=s.charAt(i);
//             if(ch=='('){
//                 count++;
//             }
//             else if(ch==')'){
//                 count--;
//             }
//             else continue;
//             if(count>max) max=count;
//         }
//         return max;
//     }
// }