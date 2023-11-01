// class Solution {
// public:
//     int minSetSize(vector<int>& arr) {
//         unordered_map<int,int>mp;
//         for(auto x:arr){
//             mp[x]++;
//         }
//         int n=arr.size();
//         priority_queue<int>pq;
//         for(auto x:mp)
//         {
//             pq.push(x.second);
//         }
//         int sum=0,count=0;
//         while(!pq.empty() && sum<n/2)
//         {
//             sum+=pq.top();pq.pop();
//             count++;
//         }
//         return count;
//     }
// };