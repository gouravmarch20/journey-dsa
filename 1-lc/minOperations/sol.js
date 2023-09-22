/**
 * @param {number[]} nums
 * @return {number}
 */
var minOperations = function(nums) {
    let c = 0;
    const n =  nums.length;
    //M1 miss equal to  sign
    for(let i = 0 ; i < n - 1 ; i++){
        if(nums[i] >= nums[i+1]){
            const diff = nums[i] - nums[i+1];
            nums[i+1] =  nums[i+1] + diff + 1;
            // c = diff + 1;//M2: miss adding in exiting value
           c += diff + 1;
        }
    }
       if(nums[n-2] > nums[n-1]){
            const diff = nums[n-2] - nums[n-1];
            c +=  diff + 1;
        }
        return c;
    
};