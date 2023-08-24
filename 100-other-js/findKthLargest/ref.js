/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
//O(n log(n))
// var findKthLargest = function(nums, k) {
//     nums.sort((a,b) => b-a)
//     return nums[k - 1]
// };

//O(n log (k))
const findKthLargest = (nums, k) => {
    pq = new MaxPriorityQueue()
    for(const num of nums) pq.enqueue(num)
    while(k > 1 ) {
        pq.dequeue()
        k--
    }
    return pq.front().element
}
