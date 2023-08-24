// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var minimumOperations = function(nums) {
//     let answer = 0
//     nums.sort((a,b) => a-b)
//     for (let i = 0; i < nums.length; i++) {
//         if (nums[i] > 0) {
//             nums = nums.map(el => el - nums[i])
//             answer++
//         }
//     }
//     return answer
// };