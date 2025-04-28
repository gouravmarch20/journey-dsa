var threeSum = function (nums) {
    let res = []
   nums = nums.sort((a, b) => a - b)
   for (let i = 0; i < nums.length; i++) {
     if (i > 0 && i < nums.length && nums[i] === nums[i - 1]) continue
 
     let j = i + 1
     let k = nums.length - 1
     //^ = not k less than j
     while (j < k) {
       let sum = nums[i] + nums[j] + nums[k]
       if (sum < 0) {
         j++
       } else if (sum > 0) {
         k--
       } else if (sum === 0) {
         res.push([nums[i], nums[j], nums[k]]) //! m1: place below j++,k--
 
         j++
         k--
         //!m2: j - 1 missed
         //!m3: j < k
         while (j < nums.length && nums[j] === nums[j - 1]) j++
         while (k > 0 && nums[k] === nums[k + 1]) k--
       }
     }
   }
   return res
 }