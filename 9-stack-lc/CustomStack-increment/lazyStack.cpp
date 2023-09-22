// class CustomStack {
// public:
//   vector <int> value;
//   vector <int> incrementV;
//   int index;
//     CustomStack(int maxSize) {
//         value.resize(maxSize);
//         incrementV.resize(maxSize);
//         index = -1;
//     }
    
//     void push(int x) {
//         if(index + 1 == value.size()){
//           return ;
//         }
//         index++;
//         value[index] = x;
//         incrementV[index] =  0;
//     }
    
//     int pop() {
//         if(index == -1) return -1;
//         int x = value[index];
//         int inc = incrementV[index];
//         index--;
//         if(index >= 0){
//           incrementV[index] += inc;
//         }
//         return x+inc;//NOTE
//     }
    
//     void increment(int k, int val) {
//         int ind = min(k - 1 , index);//min to add
//         if(index >= 0){
//          incrementV[ind] += val;

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