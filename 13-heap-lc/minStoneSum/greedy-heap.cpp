// class Solution {
// public:
//     int minStoneSum(vector<int>& piles, int k) {
//         //& not already sorted so all push  , not sure which is greater 
//        priority_queue<int> maxHeap;
//         for(int i = 0 ; i < piles.size() ; i++){
//             maxHeap.push(piles[i]);
//         }
//         while(k > 0){
//             int maxElement = maxHeap.top();
//             maxHeap.pop();

//M push add first element ( ) --> must 
//             maxHeap.push(maxElement - (maxElement / 2));
//             k--;
//         }
//         int sum = 0;
//         while(!maxHeap.empty()){
//             sum += maxHeap.top();
//             maxHeap.pop();
//         }
//         return sum;



//     }
// };