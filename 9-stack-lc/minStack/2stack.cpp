// class MinStack {
// public:
//     stack<int> st1;
//     stack<int> st2;
//     MinStack() {
//        //M wrong place init st1,st2
//     }
    
//     void push(int val) {
//       //M miss equal to case in val --> push(5 , 5 , 5) pop() rest 2 fail
//       //NOTE: st2.top() written after st2.empty , if 1st fail then only second run
//       // if(st2.empty() || st2.top() >= val ){
//       //   st2.push(val);
//       // }
//         st1.push(val);
//         if(st2.empty()){
//           st2.push(val);
//         }else if(st2.top() >= val){
//           st2.push(val);
//         }

//     }
    
//     void pop() {
//         if((!st2.empty()) && st2.top() == st1.top()){
//           st2.pop();
//         }
//         if(!st1.empty()){
//           st1.pop();
//         }
//         // st1.pop();
//     }
    
//     int top() {
      
//         return st1.top();//M confusion in st1 , st2 naming
//     }
    
//     int getMin() {
//         // if()
//         return st2.top();
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */