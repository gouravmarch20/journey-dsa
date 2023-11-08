// 2824. Count Pairs Whose Sum is Less than Target

// NOTE the question ask to return count --> so we can change array index value ==> sort implement no impact in counting

// ? way1: brute
/*
^ given case : 0 <= i < j < n  --> though i,j means nums[i] , nums[j] ==> i ,j refer to index no 
    i , j means index i may 0 , but j always more than i 

    ^ reading issue (-50 <= nums[i])
    means nums[i] value always less than -50 

    ^ nums[i] + nums[j] < target
        if target is -2 means any number lesser than -2 means>> -3 , -9 
    & ignore  -1 , 8 
 */
