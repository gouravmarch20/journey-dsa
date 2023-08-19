// 84. Largest Rectangle in Histogram
// -> height is constant , width  can increase 

//? brute - way1
/**
  - every bar if (continuos && greater) than current consider 
  - total area = area of individuals if greater than current element height //& individual area -> width is 1 , height we knew 
 */
//? brute - way2
/**
    - expand current item in right , left both --> increase width only if left/right height , greater than 
    //^ left : stop when prev  is small than current 
    //? right : stop if next smaller element found

    //~ current area = height curr * nextSmall - prevSmaller
 */


//? optimize