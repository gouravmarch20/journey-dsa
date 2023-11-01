// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int > pq;
//         for(int i = 0 ; i < k ; i++){
//             pq.push(nums[i]);
//         }
//         // 
//         for(int i = k ; i < nums.size() ; i++){
//             int element = nums[i];
//             if(element < pq.top()){//^real logic
//                 pq.pop();
//                 pq.push(element);
//             }

//         }
//         return pq.top();

//     }
// };