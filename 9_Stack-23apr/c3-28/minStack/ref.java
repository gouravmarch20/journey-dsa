// class MinStack {
//     Stack<Integer> st=new Stack<>();
//     Stack<Integer> helper = new Stack<>();
//     public MinStack() {
        
//     }
    
//     public void push(int val) {
//         if(st.size()==0){
//             st.push(val);
//             helper.push(val);
//         }
//         else{
//             if(val<helper.peek()){
//                 helper.push(val);
//             }
//             else{
//                 helper.push(helper.peek());
//             }
//             st.push(val);
//         }
//     }
    
//     public void pop() {
//         st.pop();
//         helper.pop();
//     }
    
//     public int top() {
//         return st.peek();
//     }
    
//     public int getMin() {
//         return helper.peek();
//     }
// }