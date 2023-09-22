// class CustomStack {
// public:
//     stack <int> st , st1;
//     int size;
//     CustomStack(int maxSize) {
//       size = maxSize;
//     }
    
//     void push(int x) {
//         if(st.size() < size){
//           st.push(x);
//         }
//     }
    
//     int pop() {

//         if(st.empty())
//           return -1;
        
//         int res= st.top();
//         st.pop();
//         return res;
//     }
    
//     void increment(int k, int val) {
//         while(!st.empty()){
//           st1.push(st.top());
//           st.pop();
//         }
//         while(!st1.empty()){
//           if(k > 0){
//             st.push(st1.top() + val);
//             st1.pop();
//             k--;//^m forgot
//           }else{
//              st.push(st1.top());
//             st1.pop();
//           }
//         }
//     }
// };

// /**
//  * Your CustomStack object will be instantiated and called as such:
//  * CustomStack* obj = new CustomStack(maxSize);
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * obj->increment(k,val);
//  */