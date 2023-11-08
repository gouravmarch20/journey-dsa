// vector<int> minAnd2ndMin(int a[], int n) {
//   int smallest = INT_MAX;//^m2: wrote int_min
//   int secondSmallest = INT_MAX;
//   for (int i = 0; i < n; i++) {
//     if (smallest > a[i]) smallest = a[i];//!m3: sign issue
//   }

//   for (int i = 0; i < n; i++) {
//     if (smallest < a[i]) {//!m4: sign
    //!m1 wrong compare -> no need
//       // if(secondSmallest == INT_MAX ){
//       //     secondSmallest = a[i];
//       // }

//       if (secondSmallest > a[i]) {
//         secondSmallest = a[i];
//       }
//     }
//   }

//   vector<int> ans;
////^m5:: if not found then return -1 in both
//   if (secondSmallest == INT_MAX) {
//     smallest = -1;
//     secondSmallest = -1;
//   }
//   ans.push_back(smallest);

//   ans.push_back(secondSmallest);
//   return ans;
// }