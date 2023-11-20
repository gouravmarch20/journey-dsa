// class Solution {
//     public String removeOuterParentheses(String s) {
//         // Stack<Character> st=new Stack<>();
//         // String str="";
//         // for(int i=0;i<s.length();i++){
//         //     char ch=s.charAt(i);
//         //     if(st.size()==0 && ch=='('){
//         //         st.push(ch);
//         //     }
//         //     else if(ch=='('){
//         //        str+=(ch+"");
//         //        st.push(ch);
//         //     }
//         //     else if(ch==')' && st.size()==1){
//         //         st.pop();
//         //     }
//         //     else {
//         //         str+=ch;
//         //         st.pop();
//         //     }
//         // }
//         String str="";
//         int count=0;
//         for(int i=0;i<s.length();i++){
//             char ch=s.charAt(i);
//             if(count==0 && ch=='('){
//                 count++;
//                 continue;
//             }
//             else if(ch=='('){
//                 str+=ch;
//                 count++;
//             }
//             else if(ch==')' && count==1){
//                 count--;
//                 continue;
//             }
//             else{
//                 str+=ch;
//                 count--;
//             }
//         }
//         return str;
//     }   
// }