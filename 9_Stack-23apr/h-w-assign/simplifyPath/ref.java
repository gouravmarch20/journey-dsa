// class Solution {
//     public String simplifyPath(String path) {
//         Stack<String> st=new Stack<>();
//         for(int i=0;i<path.length();i++){
//             char ch=path.charAt(i);
//             if(ch=='/') continue;
//             String str="";
//             while(i<path.length() && path.charAt(i)!='/'){
//                 str+=path.charAt(i);
//                 i++;
//             }
//             if(str.equals(".")) continue;
//             else if(str.equals("..")){
//                 if(st.size()>0) st.pop();
//             }
//             else{
//                 st.push(str);
//             }
//             // if(ch=='/'){
//             //     if(str.length()==0 || str.equals(".")){
//             //         str="";
//             //         continue;
//             //     }
//             //     else if(str.equals("..")){
//             //         str="";
//             //         if(st.size()>0)st.pop();
//             //     }else{
//             //         st.push(str);
//             //         str="";
//             //     }
//             // }
//             // else{
//             //     str+=ch;
//             // }
//         }
//         String res="";
//         while(st.size()!=0){
//             res="/"+st.pop()+res;
//         }
//         if(res.length()==0) return "/";
//         else return res;



//         // for(int i=0;i<path.length();i++){
//         //     char ch=path.charAt(i);
//         //     if(st.size()==0) st.push(ch+"");
//         //     else if(ch=='/'){
//         //         if(str.equals("..")){
//         //             if(st.size()>1)st.pop();
//         //             str="";
//         //         }
//         //         else if(str.equals(".")){
//         //             str="";
//         //             continue;
//         //         }
//         //         else{
//         //             if(str.length()==0) st.push("/");
//         //             else st.push(str);
//         //             str="";
//         //         }
//         //     }
//         //     else{
//         //         str+=ch;
//         //     }
//         // }
//         // String res="",temp1="",temp2="";
//         // while(st.size()!=0){
//         //     temp1=st.pop();
//         //     if(temp1!=temp2){
//         //         res=temp1+res;
//         //     }
//         //     temp2=temp1;
//         // }
//         // if(res.length()>1 && res.charAt(res.length()-1)=='/'){
//         //     return res.substring(0,res.length()-1);
//         // }
//         // return res;

//     }
// }