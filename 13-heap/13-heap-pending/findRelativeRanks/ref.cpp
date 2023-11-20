// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& score) {
//         priority_queue<pair<int,int>>pq;
// 		int n=score.size();
// 		vector<string>ans(n);
// 		for(int i=0;i<n;i++)
// 		{
// 			pq.push({score[i],i});
// 		}
// 		int k=1;
// 		while(!pq.empty()){
// 			auto it=pq.top();
// 			pq.pop();
// 			if(k==1)
// 			ans[it.second]="Gold Medal";
// 			else if(k==2)
// 			ans[it.second]="Silver Medal";
// 			else if(k==3)
// 			ans[it.second]="Bronze Medal";
// 			else
// 			ans[it.second]=to_string(k);
// 			k++;
// 		}
// 		return ans;
//     }
// };