// 84. Largest Rectangle in Histogram
// -> height is constant , width  can increase 

//? brute 
/**
    - expand current item in right , left both --> increase width only if left/right height , greater than 
    //^ left : stop when prev  is small than current 
    //? right : stop if next smaller element found

    //~ current area = height curr * nextSmall - prevSmaller
 */

//? optimize