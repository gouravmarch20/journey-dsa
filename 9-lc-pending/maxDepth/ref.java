// class Solution {
//     public int maxDepth(String s) {
//         // Stack<Integer> st=new Stack<>();
//         // int max=0;
//         // for(int i=0;i<s.length();i++){
//         //     char ch=s.charAt(i);
//         //     if(st.size()==0 && ch=='('){
//         //         st.push(1);
//         //     }
//         //     else if(ch=='('){
//         //         st.push(st.peek()+1);
//         //     }
//         //     else if(ch==')'){
//         //         int temp=st.pop();
//         //         if(temp>max){
//         //             max=temp;
//         //         }
//         //     }
//         // }
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