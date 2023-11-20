// class Node{
//     Node[] arr;
//     boolean flag;
//     public Node(){
//         arr=new Node[26];
//         flag=false;
//     }
//     public boolean containsKey(char ch){
//         if(arr[ch-'a']==null) return false;
//         return true;
//     }
//     public void insert(char ch){
//         Node newNode=new Node();
//         arr[ch-'a']=newNode;
//     }
//     public Node getNext(char ch){
//         return arr[ch-'a'];
//     }
// }
// class Solution {
//     Node root;
//     void insert(String word){
//         Node temp=root;
//         for(int i=0;i<word.length();i++){
//             char ch=word.charAt(i);
//             if(temp.containsKey(ch)==false){
//                 temp.insert(ch);
//             }
//             temp=temp.getNext(ch);
//         }
//         temp.flag=true;
//     }
//     String search(String str){
//         Node temp=root;
//         if(temp.containsKey(str.charAt(0))==false) return str;
//         String ans="";
//         for(int i=0;i<str.length();i++){
//             char ch=str.charAt(i);
//             if(temp==null) return str;
//             if( temp.flag==true){
//                 return ans;
//             }
//             ans+=ch;
//             temp=temp.getNext(ch);
//         }
//         return ans;
//     }
//     public String replaceWords(List<String> dictionary, String sentence) {
//         root=new Node();
//         for(int i=0;i<dictionary.size();i++){
//             insert(dictionary.get(i));
//         }
//         String res="";
//         String[] str=sentence.split(" ");
//         for(int i=0;i<str.length;i++){
//             String temp=search(str[i]);
//             res=res+" " +temp;
//         }
//         return res.substring(1);
//     }
// }