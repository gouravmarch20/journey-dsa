// 160. Intersection of Two Linked Lists
// case l1,l2 -> equal length , l2 : is empty + common 
//way1 : map mai store address if found by second --> return 
//* O(n)
//& O(n)

//way2: make both same length , largest LL items ko remove --> then iterate together to find intersection


//? way2 (Approach_A) --> find greater length , skip that length 


//? way2 (Approach_B) --> distance intuition
/*
    - List A -> A to B , B to C //? B is intersection

    - List B -> D to B , B to C //? B is intersection

    ~ B to C is common in both

    so if we cut largest LL , make the both equal --> both start iteration from different but  reach to intersection together
    
    //* Total length of List A is X , Total length B is Y , 
    //* Math.abs(X - Y) --> get extra length 
    remove extra length 
    start iterate together

*/