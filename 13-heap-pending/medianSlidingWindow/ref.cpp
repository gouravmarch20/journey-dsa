// class Solution {
// public:
//     vector<double> medianSlidingWindow(vector<int>& nums, int k) {
//         vector<double>ans;
//         unordered_map<int,int>mp;
//         priority_queue<int>maxheap;
//         priority_queue<int,vector<int>,greater<int>>minheap;
//         for(int i=0;i<k;i++)
//         {
//             maxheap.push(nums[i]);
//         }
//         for(int i=0;i<k/2;i++)
//         {
//             minheap.push(maxheap.top());
//             maxheap.pop();
//         }
//         for(int i=k;i<nums.size();i++)
//         {
//             if(k%2!=0)
//             ans.push_back(maxheap.top()*1.0);
//             else
//             ans.push_back((maxheap.top()*1.0+minheap.top()*1.0)/2);
//             int out=nums[i-k],in=nums[i];
//             int balance=0;
//             if(out<=maxheap.top())
//             {
//                 balance--;
//                 if(out==maxheap.top())
//                 maxheap.pop();
//                 else
//                 mp[out]++;
//             }
//             else
//             {
//                 balance++;
//                 if(out==minheap.top())
//                 minheap.pop();
//                 else
//                 mp[out]++;
//             }
//             if(!maxheap.empty() && in<=maxheap.top())
//             {
//                 maxheap.push(in);
//                 balance++;
//             }
//             else
//             {
//                 minheap.push(in);
//                 balance--;
//             }

//             if(balance>0)
//             {
//                 minheap.push(maxheap.top());
//                 maxheap.pop();
//             }
//             else if(balance<0)
//             {
//                 maxheap.push(minheap.top());
//                 minheap.pop();
//             }
//             while(!maxheap.empty() && mp[maxheap.top()])
//             {
//                 mp[maxheap.top()]--;
//                 maxheap.pop();
//             }
//             while(!minheap.empty() && mp[minheap.top()])
//             {
//                 mp[minheap.top()]--;
//                 minheap.pop();
//             }
//         }
//         if(k%2!=0)
//         ans.push_back(maxheap.top()*1.0);
//         else
//         ans.push_back((maxheap.top()*1.0+minheap.top()*1.0)/2.0);

//         return ans;
//     }
// };