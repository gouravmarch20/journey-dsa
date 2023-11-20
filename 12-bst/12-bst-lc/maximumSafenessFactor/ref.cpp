// class Solution {
// public:
    
//     bool dfs(int mid,vector<vector<int>>&grid1,int x,int y,int n,int m,vector<vector<int>>&vis)
//     {
//         if(grid1[0][0]<mid)return false;
//         if(x==n-1 && y==m-1) return true;
//         vis[x][y]=1;
//          int drow[]={-1,0,1,0};
//     int dcol[]={0,1,0,-1};
//         for(int i=0;i<4;i++)
//         {
//             int newrow=x+drow[i];
//             int newcol=y+dcol[i];
//             if(newrow>=0 && newcol>=0 && newrow<n && newcol<m && grid1[newrow][newcol]>=mid && vis[newrow][newcol]==-1)
//             {
//                 if(dfs(mid,grid1,newrow,newcol,n,m,vis))
//                 return true;
//             }
//         }
//         return false;
//     }
// int maximumSafenessFactor(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<vector<int>>grid1(n,vector<int>(m,INT_MAX));
//         queue<pair<pair<int,int>,int>>pq;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(grid[i][j]==1)
//                 {
//                     grid1[i][j]=0;
//                     pq.push({{i,j},0});
//                 }
//             }
//         }
//         int maxva=0;
//          int drow[]={-1,0,1,0};
//     int dcol[]={0,1,0,-1};
//         while(!pq.empty())
//         {
//             auto temp=pq.front();
//             pq.pop();
//             int x=temp.first.first;
//             int y=temp.first.second;
//             int val=temp.second;
//             maxva=max(maxva,val);
//             for(int i=0;i<4;i++)
//             {
//                 int newrow=x+drow[i];
//                 int newcol=y+dcol[i];
//                 if(newrow<n && newrow>=0 && newcol<m && newcol>=0 && grid1[newrow][newcol]>val+1)
//                 {
//                     grid1[newrow][newcol]=val+1;
//                     pq.push({{newrow,newcol},val+1});
//                 }
//             }

//         }
//         int start=0,end=maxva;
//         int ans=0;
//         while(start<=end)
//         {
//             vector<vector<int>>vis(n,vector<int>(m,-1));
//             int mid=(start+end)/2;
//             if(dfs(mid,grid1,0,0,n,m,vis))
//             {
//                 ans=mid;
//                 start=mid+1;
//             }
//             else
//             end=mid-1;
//         }
//         return ans;
//     }
// };