//? if power of 2 --> n (n-1) == 0
//! fail in n = 1 

console.log(0 & -1);//^ fail
console.log(4 & 3);// 100 & 011 ==> 0
console.log(2 & 1);// 010 & 001 ==> 0
console.log(8 & 7);// 1000 & 0111 ==> 0
console.log(16 & 15);// 10000 & 01111 ==> 0
console.log(32 & 31);// 100000 & 011111 ==> 0