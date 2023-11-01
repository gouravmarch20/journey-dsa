// class KthLargest {
//     priority_queue<int,vector<int>,greater<int>> pq;
//     stack<int>st;
//     int vi;
// public:
//     KthLargest(int k, vector<int>& nums) {
//          vi=k;
//         for(auto x:nums)
//         {
//             pq.push(x);
           
//         }
       
//     }
    
//     int add(int val) {
//         pq.push(val);
//         while(pq.size()>vi)
//         {
//             pq.pop();
//         }

//         return pq.top();
//     }
// };

// /**
//  * Your KthLargest object will be instantiated and called as such:
//  * KthLargest* obj = new KthLargest(k, nums);
//  * int param_1 = obj->add(val);
//  */