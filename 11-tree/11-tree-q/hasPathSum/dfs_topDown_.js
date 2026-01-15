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
 * @return {boolean}
 */

var hasPathSum = function (root, target) {
  function dfs(curr, remain) {
    if (curr == null) return false;
    remain -= curr.val;

    if (!curr.left && !curr.right) {
      return remain === 0;
    }
    return dfs(curr.left, remain) || dfs(curr.right, remain);
  }
  return dfs(root, target);
};
