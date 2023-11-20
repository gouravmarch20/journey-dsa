int count(int arr[], int n, int x) {
  // code here
  int s = 0;
  int e = n - 1;

  int firstBsFound = -1;
  while (s <= e) {
    int m = s + (e - s) / 2;

    if (arr[m] == x) {
      firstBsFound = m;
      break;
    } else if (arr[m] < x) {
      s = m + 1;
    } else if (arr[m] > x) {
      e = m - 1;
    }
    m = (s + e) / 2;
  }
  if (firstBsFound == -1) {
    return 0;
  }

  int leftMost = firstBsFound;
  int rightMost = firstBsFound;

  // NOTE: improved code then comment one + typesafe array address check

  while (leftMost > 0 && arr[leftMost - 1] == x) {
    leftMost--;
  }
  while (rightMost < n - 1 && arr[rightMost + 1] == x) {
    rightMost++;
  }

  // while(arr[leftMost] == x){
  //   leftMost--;
  //  }
  //  while(arr[rightMost] == x){
  //         rightMost++;
  //  }
  // leftMost = leftMost + 1;
  // rightMost = rightMost - 1;

  return rightMost - leftMost + 1;
}