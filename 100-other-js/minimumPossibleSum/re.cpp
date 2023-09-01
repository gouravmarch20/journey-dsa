// class Solution {
// public:
//     long long minimumPossibleSum(int n, int target) {
//         unordered_map<int,bool> exist;
//         int size=0;
//         int i=1;
//         long long sum=0;
//         // cout << "New\n";
//         while(size != n){
//             int need = target-i;
//             if(exist.find(need) == exist.end()){
//                 size++;
//                 exist[i] = true;
//                 // cout << i << " -> ";
//                 sum += i;
//             }
//             i++;
//         }
//         return sum;
//     }
// };