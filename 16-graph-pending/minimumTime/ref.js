// class Solution {
//     public:
//         int minimumTime(int n, vector<vector<int>>& R, vector<int>& T) {
//             int ans = 0;
//             vector<vector<int>> nextCourses(n+1);
//             vector<int> preqCourseCnt(n+1);
//             for(auto& r : R) {
//                 preqCourseCnt[r[1]]++;
//                 nextCourses[r[0]].push_back(r[1]);
//             }
            
//             priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
//             for(int i = 1; i <= n; i++) 
//                 if(!preqCourseCnt[i]) q.push({T[i-1], i});
            
//             while(size(q)) {
//                 auto [toComplete, course] = q.top(); q.pop();
//                 ans = max(ans, toComplete);
//                 for(auto& c : nextCourses[course]) 
//                     if(!--preqCourseCnt[c])
//                         q.push({toComplete + T[c-1], c});
//             }
//             return ans;
//         }
//     };