/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} targetSum
 * @return {number}
 */
var pathSum = function(root, targetSum) {
    let ans = 0
    const dfs = (node, sums) => {
        if (!node) return
        const newSums = []
        for (const sum of sums) {
            let newSum = sum + node.val
            if (newSum === targetSum) ans++
            newSums.push(newSum)
        }
        newSums.push(node.val)
        if (node.val === targetSum) ans++
        dfs(node.left, [...newSums])
        dfs(node.right, [...newSums])
    }
    dfs(root, [])
    return ans
};