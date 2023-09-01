/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */


const threeSumClosest = (nums, target) => {
    nums.sort((a,b) => a-b)
    let ans = 100000
    let difference = 1000000

    for (let i = 0; i < nums.length - 2; i++) {
        for (let j = i + 1; j < nums.length - 1; j++) {
            for (let k = j + 1; k < nums.length; k++) {
                let sum = nums[i] + nums[j] + nums[k]
                let newDif = Math.abs(sum - target)
                if (newDif < difference) {
                    ans = sum
                    difference = newDif
                }
            }
        }
    }
    return ans
}

// var threeSumClosest = function(nums, target) {
//     let closest = nums[0] + nums[1] + nums[2];
//     let smallestDifference = Math.abs(target - closest);
//     for (let i = 0; i < nums.length - 2; i++) {
//         for (let j = i+1; j < (nums.length - 1); j++) {
//             newArray = nums.slice(j +1);
//             console.log(newArray, j, nums.length, i)
            
//             newArray.forEach((k) => {
//                 let sum = nums[i] + nums[j] + nums[k];
//                 let difference;
//                 if (target > 0) {
//                     if (target > sum) {
//                         difference =  Math.abs(target - sum);
//                                         console.log(sum, difference, "a")
//                         if (difference < smallestDifference) {
//                             closest = sum;
//                             smallestDifference = difference;
//                         }
//                     } else {
//                         difference =  Math.abs(sum - target);
//                                         console.log(sum, difference, "b", nums[i] , nums[j] , nums[k])
//                          if (difference < smallestDifference) {
//                             closest = sum;
//                             smallestDifference = difference;
//                         }
//                     }
//                 } else {
//                     if (target < sum) {
//                         difference =  Math.abs(target - sum);
//                         console.log(sum, difference, "c")
//                         if (difference < smallestDifference) {
//                             closest = sum;
//                             smallestDifference = difference;
//                         }
//                     } else {
//                         difference =  Math.abs(sum - target);
//                                         console.log(sum, difference, "d")
//                         if (difference < smallestDifference) {
//                             closest = sum;
//                             smallestDifference = difference;                        
//                         }
//                     }
//                 }
//             })
//         }
//     }
//     return closest;
// };
