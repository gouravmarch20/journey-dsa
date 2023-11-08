//26. Remove Duplicates from Sorted Array
//^ question read --=> return total unique item count 
//^ in-place must
//W1: 2 pointer => value  play => 1st for iterate , 2nd for safe tested index
//* O(N)
//& O(1)
//NOTE: swap not work , a
//if do swap ==> arr[i] == arr[i+1] compare fail prev mai any other assign
//? so simply change value of previous 

//W2 