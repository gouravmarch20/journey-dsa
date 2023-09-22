// class Solution {
// public:
//     int solve(vector<vector<int>>&grid,vector<pair<int,int>>&zero,vector<pair<int,int>>&extra,int ind)
//     {
//         if(ind>=zero.size())
//         return 0;
//         int ans=1000001;
//         for(auto ext:extra)
//         {
//             int curx=ext.first;
//             int cury=ext.second;
//             if(grid[curx][cury]>1)
//             {
//                 grid[curx][cury]-=1;
//                 grid[zero[ind].first][zero[ind].second]=1;
//                 ans=min(abs(curx-zero[ind].first)+abs(cury-zero[ind].second)+
//                 solve(grid,zero,extra,ind+1),ans);

//                 grid[curx][cury]+=1;
//                  grid[zero[ind].first][zero[ind].second]=0;
//             }
//         }
//         return ans;
//     }
//     int minimumMoves(vector<vector<int>>& grid) {
//         vector<pair<int,int>>zero,extra;
//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<3;j++)
//             {
//                 if(grid[i][j]>1)
//                 extra.push_back({i,j});
//                 else if(grid[i][j]==0)
//                 zero.push_back({i,j});
//             }
//         }
//         return solve(grid,zero,extra,0);

//     }
// };