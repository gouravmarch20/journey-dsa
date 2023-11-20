// 1290. Convert Binary Number in a Linked List to Integer
//w1
//* O(M+M)
//w2
//* O(M)
/**
 // ? consider 1 first on is last so  
            ans = 0 * 0 --> 0
            if 1 : --> ans + 1 --> 1
            if 0 : --> ans + 0 --> 0
 //?  if next one is not --> add 1 pow to prev ans , this on is last consider
            ans = 1 * 2 --> 2//^ each time *2 to increase power
            ans += 0/1

  //  1  -> 0 -> 1
    - 0 +1 => 1
    - 1*2 + 0 => 2
    - 2*2 +1 => 5
 */
