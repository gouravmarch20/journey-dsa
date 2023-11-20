//319. Bulb Switcher

// brute 
//* O(n^2)
//& O(n)


//* O(log(n)) ==> square increment
//& O(1)
/*
 
 ? number having odd factor will only remain on.
 eg: 
  5 -> 1 , 2  --> off to on , on to off 
  6 -> 1,2,3,6  --> off to on , on to off , off to on , on to off 
  ^ 4 -> 1 , 2 , 4 -> off to on , on to off , off to on

  ? only perfect square have odd factor (ignore same number )

  ~ so no of perfect square present is the number of bulbs remain on 

*/
