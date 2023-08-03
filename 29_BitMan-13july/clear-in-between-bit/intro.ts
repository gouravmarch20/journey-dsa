
/**
// mask1 - handle left to right
// mask2 - handle right to left
// mask --> desired set-bit to remove in between bit -->

  mask1 : -1 all bit 1 , right sift till i + 1 --> to make i no zero 
  mask2  : 1 right sift j endBitIndex time ==> 2 ^  endBitIndex is result - 1 (to make all 1 )
  mask ==> combine mask1 | mask2 //* both has in between 0 bit 
  // no = no & mask
 */
