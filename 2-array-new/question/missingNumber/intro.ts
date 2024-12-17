//268. Missing Number

//! fail algo --> index position play approch --> 30 min spend
//w4: brute: 
//*O(n^2)
//w0: best --> bitwise || natural no sum logic 0 to n
//*O(n)
//? all game is :: 0 to n natural no sum :: n * n + 1 / 2 
//? give unique number all is ==> hence totalSum - curr sum

// w1 : sort 
//* O(n log(n))
// w2 : visited  array
//& O(n) --> mark negative in new array of size n + 1 
//* O(n)