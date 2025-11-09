/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    let n = nums.length ;
    let set = new Set()
    let result = []
    for(let i = 0 ; i < n ; i++){
          for(let j = i + 1 ; j < n ; j++){
                for(let k = j+1 ; k < n ; k++){
                    if(nums[i] + nums[j] + nums[k] == 0){


                    let arr = [nums[i], nums[j], nums[k]].sort((a, b) => a - b)
                    let key = arr.toString() // e.g. "-1,0,1"

                    if(!set.has(key)) {
                        set.add(key)
                        result.push(arr)
                    }
                    }
                }
          }
    }
    return result

};