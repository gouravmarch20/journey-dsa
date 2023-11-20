// ! find odd number 
// all repeating element appear in pairs except 1 number
//^ no alternate same pair have some gap  

//? O(n) => xor operator
//? O(log(n)) => binary search

//* INDEX WISE BS
// till same flow -> even odd for mai pair exit ==> m = m+1
// after 1 unpaired ->  odd even for mai pair exit ==> m = m -1
// ! unpaired number appear in even only