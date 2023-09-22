/**
 * @param {number} n
 * @return {number}
 */
const countOrders = (n) => {
    count = 1
    for (let i = 2; i <= n; i++) count = count  * i * (i * 2 - 1) % 1000000007
    return count
};
