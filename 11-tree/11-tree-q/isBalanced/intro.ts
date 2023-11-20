// 110. Balanced Binary Tree
// ~ diff -5 mean  5 node difference --> greater than 1 node diff -> return false
//! too handle -ve sign -> -5 , -4 node difference we have done Math.abs()
//  TODO: HOW TO BEFORE DOING QUESTION TLE WILL COME IF USE THIS APPROACH
// way1 : brute 
//* O(N^2)
// way2 : 
//* O(N) --> same time height find , find diff more than  1 return -1