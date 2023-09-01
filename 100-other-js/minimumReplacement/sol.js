// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var minimumReplacement = function(nums) {
//     let ans = 0
//     let nextVal = nums[nums.length-1]
//     for (let i = nums.length - 2; i >= 0; i--) {
//         let val = nums[i]
//         while(val > nextVal) {
//             let numberOfNewElements = Math.ceil(val / nextVal)
//             val = Math.floor(val / numberOfNewElements)
//             ans += numberOfNewElements - 1
//         }
//         nextVal = val
//     }
//     return ans
// };