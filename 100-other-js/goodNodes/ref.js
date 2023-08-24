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
 * @return {number}
 */
var goodNodes = function(root) {
    let ans = 0
    dfs = (node, maxValueFound) => {
        if (!node) return 

        if (node.val >= maxValueFound) {
            ans++
            maxValueFound = node.val
        }

        if (node.left) dfs(node.left, maxValueFound)
        if (node.right) dfs(node.right, maxValueFound)

    }
    dfs(root, -10001)
    return ans
};