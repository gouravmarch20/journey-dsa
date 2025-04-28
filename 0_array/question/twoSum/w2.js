// /**
//  * @param {number[]} nums
//  * @param {number} target
//  * @return {number[]}
//  */
// var twoSum = function(nums, target) {
//  const map = new Map()
//   for (const index in nums) {
//     const pairIndex = target - nums[index]
//     if (map.has(nums[index])) {
//       return [index, map.get(nums[index])]
//     }
//     map.set(pairIndex, index)
//   }
//? by object 
// //     const obj = {}
// //   for (let i = 0; i < nums.length; i++) {
// //     if (obj.hasOwnProperty(nums[i])) {
// //       return [i, obj[nums[i]]]
// //     }
// //     obj[target - nums[i]] = i
// //   }
// };