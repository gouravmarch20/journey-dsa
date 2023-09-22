// class Solution {
// public:
//     int twoEggDrop(int n) {
//         vector<int>sd(1100,0);

//     int print_value = 1;
//     int index = 1;

//     while (index <n+1) {
//         int nw = print_value ; 
        
//         while (nw) {
//             sd[index]=print_value;


//             index++;
//             nw--;
//         }
//         print_value++;
//     }

//        return sd[n];
        
//     }
// };


// /*

// 1-1

// 2-2
// 3-2

// 4-3
// 5-3
// 6-3

// 7-4
// 8-4
// 9-4
// 10-4

// 11-5
// 12-5
// 13-5
// 14-5
// 15-5

// 16-6
// 17-6
// 18-6
// 19-6
// 20-6
// 21-6


// 1000-45



// */