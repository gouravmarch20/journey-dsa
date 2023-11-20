// string calc_Sum(int *a, int n, int *b, int m) {
//   // Complete the function
//   int i = n - 1;  //^ need to do -1
//   int j = m - 1;
//   string ans;
//   int carry = 0;
//   while (i >= 0 && j >= 0) {
//     int sum = a[i] + b[j] + carry;
//     int digit = sum % 10;        //^ for digit need carry ==> % use
//     ans.push_back(digit + '0');  //! typecase need --> number to string so +
//     carry = sum / 10;
//     i--;
//     j--;
//   }

//   while (i >= 0) {
//     int sum = a[i] + carry;
//     int digit = sum % 10;
//     ans.push_back(digit + '0');
//     carry = sum / 10;
//     i--;
//   }
//   while (j >= 0) {
//     int sum = b[j] + carry;
//     int digit = sum % 10;
//     ans.push_back(digit + '0');
//     carry = sum / 10;
//     j--;
//   }

//   //^ if carry still
//   if (carry) {
//     ans.push_back(carry +'0');  //^ type case => number to string
//   }

//! 0 not allow in string as per test case fail --> remove all leading before
//! reverse is good option
//   while (ans[ans.size() - 1] == '0') {
//     ans.pop_back();  //! written  pop
//   }

//   reverse(ans.begin(), ans.end());  //! reverse not return any thing
//   return ans;
// }