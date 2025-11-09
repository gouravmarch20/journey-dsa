// 295. Find Median from Data Stream


var MedianFinder = function() {
    // Store all numbers
    this.nums = [];
};

/** 
 * @param {number} num
 * @return {void}
 */
MedianFinder.prototype.addNum = function(num) {
    this.nums.push(num); // just add number to array
};

/**
 * @return {number}
 */
MedianFinder.prototype.findMedian = function() {
    // Sort the array every time we find median
    this.nums.sort((a, b) => a - b);
    const n = this.nums.length;
    const mid = Math.floor(n / 2);
    
    if (n % 2 === 0) {
        // Even length → average of two middle numbers
        return (this.nums[mid - 1] + this.nums[mid]) / 2;
    } else {
        // Odd length → middle number
        return this.nums[mid];
    }
};