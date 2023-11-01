// 421. Maximum XOR of Two Numbers in an Array

//W1 : BRUTE :: TLE
//*O(N^2)
//&O(1)

/**
  //^ to knew what is bit no at particular index ==> no >> index & 1 
  ^  7 >> 3 -> means 3 bit remove ==> 0
  ^  7 >> 2 -> means 2 bit remove ==> 1
  //^ bit count 1 to 32 , bit power  to 31 
  //& opposite child found jump on that node ==> left bit is greater whole sum right to left -1 

  //eg>> 100 -> 7  , 011 -> 4
  //eg>> 1000 -> 15  , 0111 -> 7
 */