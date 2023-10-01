// 236. Lowest Common Ancestor of a Binary Tree

//? base case :  when even one found & 2 not found we return  --> found root
/**
 
 *  & any distinct node 

  //^ p : 8 , q : 4 
  -        3 
  -      /    \
  -     5      1
  -    / \     / \
  -   6    2    0  8
  -       / \
  -       7  4  


    if not found return null to function call 
    if any one found return that root --> to fc 
    if both found return //* current node //NOTE: if ancestors find in middle of tree , still all pending function call --> right one function run for all pending case --> right return NULL (GUARANTEE OF UNIQUE ) ===> any one found case will execute to ensure lowest ancestors 

// & same node line number 


 // ! when first found --> below search stop we keep returning , pending function only execute 

    //^ p : 5 , q : 6 
 -        3 
 -      /    \
 -     5     -1
 -     /
 -     6   
   // lca(3) ==> get 5 , return 5 
            lca(5)  --> return 5 

-           lca(-1)  --> return null 
 //? hence 5 is common ancestor

 */

//
