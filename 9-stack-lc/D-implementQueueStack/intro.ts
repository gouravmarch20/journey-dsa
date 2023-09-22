// 232. Implement Queue using Stacks
//NOTE: not given  what if both st is empty pop() before need , so i avoided & code worked 
// w1 : brute 

/**
 * push mai fill both stack --> st1 mai reverse of st
 * pop mai --> remove st1 sai , assign to st
 * peek mai --> assign st to  st1 top , st1 top return 
 */

//w2: brute but clean , bit optimism wise approach 
/**
 * push : fill st
 * peek : return st1.top() , if empty st1 assign st
 * pop : call peek , perform st1.pop return it val
 */