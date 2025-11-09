/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map = new Map();
    let res = []
    for(let i = 0 ; i < nums.length ; i++){
        let reqT = target - nums[i] ;
        if(map.has(reqT)){
            return  [ i , map.get(reqT)]

        }
        map.set(nums[i], i);
    }
    
    return res
};


