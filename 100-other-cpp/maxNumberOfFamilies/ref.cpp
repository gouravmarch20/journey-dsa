// class Solution {
// public:
//     bool check(map<pair<int,int>,int>&mp,int i,int j1,int j2)
//     {
//         for(int k=j1;k<=j2;k++)
//         {
//             if(mp[{i,k}])
//             return false;

//         }
//         return true;
//     }
//     int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
//         // vector<vector<long long int>>seat(n+1,vector<long long int>(11,1));
//         map<pair<int,int>,int>mp;
//         unordered_map<int,int>mp1;
//         for(auto x:reservedSeats)
//         {
//            int fi=x[0];
//            int se=x[1];
//            mp[{fi,se}]++;
//         }
//         int count=0;
//         // sort(reservedSeats.begin(),reservedSeats.end());
//         for(auto x:reservedSeats)
//         {
//             int i=x[0];
//            if(check(mp,i,2,9) && mp1[i]==0)
//            {
//                count+=2;
//            }
//            else if(check(mp,i,2,5) && mp1[i]==0)
//            {
//                count+=1;
//            }
//            else if(check(mp,i,4,7) && mp1[i]==0)
//            {
//                count+=1;
//            }
//            else if(check(mp,i,6,9) && mp1[i]==0)
//            {
//                count+=1;
//            }
//             mp1[i]++;
//         }
//         int total=n*2;
//         total-=mp1.size()*2;
//         total+=count;
//         return total;
//     }
// };