//? why deque --> front , back both need to remove 
// back sai --> largest of current window
//front sai remove --> if window hit k size

//? we need index --> without index can not do window side exceed or not 

//* window size exceed --> i - q.front() >= k ==> i is the itteration , q.front() till current index we had cover in deque

//& O(n) ==> worst case mai full queue will get fill --> eg: 5 array size , k = 5 