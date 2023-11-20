// class Node{
//     public: 
//         char data;
//         int count;
//         Node(char d , int c){
//             data = d;
//             count = c;
//         }
// };
// class compare{
//   public: 
//     bool operator()(Node a , Node b){
//         return a.count < b.count;
//     }  
// };

// class Solution {
// public:
//     string longestDiverseString(int a, int b, int c) {
//         map<char , int > mp;
//         mp['a'] = a;
//         mp['b'] = b;  
//         mp['c'] = c;   
//         priority_queue< Node , vector<Node> , compare> maxHeap;
//         for(auto p : mp){
//             if(p.second > 0){
//                 Node  temp(p.first , p.second );
//                 maxHeap.push(temp);
//             }
//         }
//          string ans ="";
//      while (maxHeap.size() > 1) {
//             Node first = maxHeap.top();
//             maxHeap.pop();
//             Node second = maxHeap.top();
//             maxHeap.pop();

//             if (first.count >= 2) {
//                 ans += first.data;
//                 ans += first.data;
//                 first.count -= 2;
//             } else {
//                 ans += first.data;
//                 first.count -= 1;
//             }
            
//              //^m4: if second count more than first cont then only consume 2 of second
//             if(second.count >= 2 &&  second.count >=  first.count  ){
//                  ans += second.data;
//                  ans += second.data;
//                  second.count -= 2;
//              }else{
//                 ans += second.data;
//                 second.count -= 1;
//              }
//              //^m3: need to push --> again if not zero 
//             if(first.count > 0){
//                 maxHeap.push(first);
//             }
//             if(second.count > 0){
//                 maxHeap.push(second);
//             }
//          }
//          if(maxHeap.size()  == 1){
//               Node temp = maxHeap.top();
//               maxHeap.pop();//& end of maxHeap , last item as size is 1
//             if(temp.count >=  2){
//                 ans += temp.data;
//                 ans += temp.data;
//                 temp.count -= 2 ;
//             }else{
//                 ans += temp.data;
//                 temp.count -= 1;
//             }
//          }
//          return ans;
//     }
// };