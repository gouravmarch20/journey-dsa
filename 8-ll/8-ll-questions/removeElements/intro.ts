//203. Remove Linked List Elements


//NOTE: delete mai always these case handle ==> if head mai delete , if middle mai , if last on

//* if we want to delete a node we have to 1 step back to change node
//! not possible by only curr -->  curr already reached there , prev link can not be break

/**
  * ? way1
   1. head case handle //? granted prev will not NULL in found case so prev->next = curr
    what if 7 to remove from  7->7->7
   2. if in middle & last 
        - found 
            -  //^curr sai delete ,  curr = curr -> next ,  prev->next = curr 
        - not found --> normal 
 */
