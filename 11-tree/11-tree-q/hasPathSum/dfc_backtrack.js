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
  function traversal(curr, targetSum) {
    if (!curr) return false;
    targetSum += curr.val;
    if (!curr.left && !curr.right) {
      return targetSum === target;
    }

    return traversal(curr.left, targetSum) || traversal(curr.right, targetSum);
  }
  return traversal(root, 0);
};
