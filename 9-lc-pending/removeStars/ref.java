// class Solution {
//     public String removeStars(String s) {
//         Stack<Character> st=new Stack<>();
//         for(int i=0;i<s.length();i++){
//             char ch=s.charAt(i);
//             if(ch=='*'){
//                 st.pop();
//             }
//             else st.push(ch);
//         }
//         String str="";
//         while(st.size()!=0){
//             str=st.pop()+str;
//         }
//         return str;
//         // StringBuilder st=new StringBuilder();
//         // for(int i=0;i<s.length();i++){
//         //     char ch=s.charAt(i);
//         //     if(ch=='*'){
//         //         st.deleteCharAt(st.length()-1);
//         //     }
//         //     else st.append(ch);
//         // }
//         // return st.toString();
//     }
// }