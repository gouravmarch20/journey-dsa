//429. N-ary Tree Level Order Traversal

//!m1 : use 2 loop , if dry run case 2 founded that not possible to maintain level
/**
  -1loop : run till queue not empty , force 2loop && 3 loop to run
 //& without 1st loop -> after level 1 stop
             //&  2nd loop -> current level  all parent  remove
                    //&  3rd loop -> current remove parent child add to queue
 */
