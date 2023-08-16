// package 3_CharString-25feb.C2_26feb.removeAllAdjacentDuplicatesInString;

// public class Solution {
//     public String removeDuplicates(String s) {
//         Stack<Character> st=new Stack<>();
//         for(int i=0;i<s.length();i++){
//             char ch=s.charAt(i);
//             if(st.size()==0) st.push(ch);
//             else if(ch==st.peek()){
//                 st.pop();
//             }
//             else st.push(ch);
//         }
//         String res="";
//         while(st.size()!=0){
//             res=st.pop()+res;
//         }
//         return res;
//     }
// } {
    
// }
