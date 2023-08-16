// class Solution {
//     public int calPoints(String[] operations) {
//         Stack<Integer> st=new Stack<>();
//         for(int i=0;i<operations.length;i++){
//             if(operations[i].equals("+")){
//                 int v1=st.pop();
//                 int temp=st.peek()+v1;
//                 st.push(v1);
//                 st.push(temp);
//             }
//             else if(operations[i].equals("D")){
//                 int temp=2*st.peek();
//                 st.push(temp);
//             }
//             else if(operations[i].equals("C")){
//                 st.pop();
//             }
//             else{
//                 int x=Integer.parseInt(operations[i]);
//                 //System.out.println(x);
//                 st.push(x);
//             }
//         }
//         int sum=0;
//         while(st.size()!=0){
//             sum+=st.pop();
//         }
//         return sum;
//     }
// }