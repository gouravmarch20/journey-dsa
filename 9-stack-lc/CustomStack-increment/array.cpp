// class CustomStack {
//  public:
//   int size;
//   int max;
//   vector<int> arr;

//   CustomStack(int maxSize) {
//     size = 0;
//     max = maxSize;  //L:1 array size can not fix , so maxi variable
//     arr = vector<int>(1001, 0);
//   }

//   void push(int x) {
//     if (size < max) {
//       arr[size++] = x;
//     }
//   }

//   int pop() {
//     if (size < 1) return -1;
///// M 1 in size forgot -to subtract 1  
//     int res = arr[size - 1];
//     size--;
//     return res;
//   }

//   void increment(int k, int val) {
//     int j = k < size ? k : size;//L: 2 easy code 
//     for (int i = 0; i < j; i++) {
//       arr[i] += val;
//     }
//   }
// };

// /**
//  * Your CustomStack object will be instantiated and called as such:
//  * CustomStack* obj = new CustomStack(maxSize);
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * obj->increment(k,val);
//  */