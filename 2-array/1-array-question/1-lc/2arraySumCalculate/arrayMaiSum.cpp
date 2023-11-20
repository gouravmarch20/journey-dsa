// string calc_Sum(int *a, int n, int *b, int m) {

//   int greaterLength = n > m ? n : m;  //^m1 add 1 length for carry case

//   vector<int> finalSum(greaterLength + 1, 0);

//   int i = n - 1;
//   int j = m - 1;
//   int k = greaterLength;
//   int carry = 0;

//   while (i >= 0 || j >= 0) {

//     int digit = carry;

//     if (i >= 0) digit += a[i];
//     if (j >= 0) digit += b[j];

//     carry = digit / 10;
//     digit = digit % 10;

//     finalSum[k] = digit;

//     i--;
//     j--;
//     k--;
//   }

//   if (carry) {
//     finalSum[k] = carry;  //! m2: debug 15 min --> k need to write
//   }

//   string ans;
//   for (int i = 0; i < finalSum.size(); i++) {
//     if (i == 0 && finalSum[i] == 0) {
//       while (finalSum[i] == 0) {
//         i++;
//       }
//     }
//     ans.push_back(finalSum[i] + '0');  //!m3 debug 20 min --> typecast forgot
//   }

//   return ans;
// }