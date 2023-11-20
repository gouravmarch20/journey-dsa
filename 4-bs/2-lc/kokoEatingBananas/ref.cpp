// class Solution {
// public:

//     bool greedymonkey(vector<int>& piles, int mid, int h){

//         int time=0;
//         for(auto banana: piles){
//             int time_need = banana/mid;
//             if(banana % mid != 0)
//                 time_need++;

//             time += time_need;

//             if(time > h){
//                 return false;
//             }
//         }

//         return true;

//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
        
//         int start = 1;
//         int end = piles[0];

//         for(auto i: piles){
//             end = max(end, i);
//         }
//         int mid = start + (end -start)/2;
        
//         while(start<=end){
//             if(greedymonkey(piles, mid, h)){
//                 end = mid-1;
//             }else{
//                 start = mid+1;
//             }
//             mid = start + (end -start)/2;
//         }

//         return mid;

//     }
// };