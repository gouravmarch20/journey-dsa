// 234. Palindrome Linked List
//way1 

//* O(N)
//& O(1)
/*
 step1 - find mid , if odd 1 step ahead 
 
 step2- create reverse LL from mid to end of LL 
    NOTE: reverse linked done in exiting LL --> so O(1) time complexity 
 ^ there will 2 way to iterate LL now --> eg: 1 -> 5 -> 7 -> 9 -> 10
    ?? LL way1 iteration form head  ==> 1 -> 5 -> 7 -> 9 -> 10
    ?? LL way2 iteration from slow  ==> 10 -> 9 -> NULL

    step3: compare both if null reach return true , in between false 
*/



//* O(N)
//& O(N)
// way2: new ll reverse it  , compare reverse ll & ll 

//* O(N)
//& O(N)
// way2: simple iterate who LL & store it array , using 2 pointer in array tell palindrome or not