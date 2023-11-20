// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {
//         priority_queue<int>pq;
//         for(auto x:stones){
//             pq.push(x);
//         }
//         while(pq.size()>1)
//         {
//             int first=pq.top();
//             pq.pop();
//             int second=pq.top();
//             pq.pop();
//             // cout<<"first and seconed "<<first<<" "<<second<<endl;
//             if(first-second>=1)
//             pq.push(first-second);
//         }
//         if(pq.size()==0)
//         return 0;
//         else
//         return pq.top();
//     }
// };