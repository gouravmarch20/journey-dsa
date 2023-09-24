//Next Greater Element II
//? way1 : brute
//*O(n^2)
//& O(1)
//? way2 : double array , iterate form last --> find next prev
//*O(2 * n)
//& O(2*n)
//? way3: ROTATE AN ARRAY VISUALIZE : circular array  like it with doubling array accessing

/**
 * [3 , 5 , 7]
 * arr.size = 3 , n = 3  - 1 = 2
 * [3,5,7,3,5,7]
 * --> arr[0] == arr[3]//^ 3 % 3 = 0
 * --> arr[1] == arr[4]//^ 4 % 3 = 1
 * --> arr[2] == arr[5]//^ 5 % 3 = 2
 */
//*O(2 * n)
//& O(n)
