// vector<int> minAnd2ndMin(int a[], int n) {
//   int smallest = INT_MAX;
//   int secondSmallest = INT_MAX;
//   for (int i = 0; i < n; i++) {
//     if (smallest == INT_MAX) {
//       smallest = a[i];
//     } else if (smallest > a[i]) {
//       secondSmallest = smallest;
//       smallest = a[i];
//     } else if (secondSmallest > a[i] && smallest != a[i]) {
//       secondSmallest = a[i];
//     }
//   }

//   if (secondSmallest == INT_MAX) {
//     secondSmallest = -1;
//     smallest = -1;
//   }
//   vector<int> ans;
//   ans.push_back(smallest);
//   ans.push_back(secondSmallest);
//   return ans;
// }