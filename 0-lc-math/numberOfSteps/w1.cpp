// class Solution {
// public:
// 	int numberOfSteps(int num) {
// 		// Your code goes here
//         int cnt = 0;
//         while(num > 0){
    ////^  (num & 1) bracket not used
//             if( (num & 1) != 1) num /= 2 ;
//             else num  -= 1;
//             cnt++;
//         }
//         return cnt;
// 	}
// };