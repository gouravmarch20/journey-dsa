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
  let ans = false;
  function traversal(curr, targetSum) {
    if (curr == null) return;
    targetSum += curr.val;
    if (targetSum == target && !curr.left && !curr.right) {
      ans = true;
    }
    if (curr.left) traversal(curr.left, targetSum);
    if (curr.right) traversal(curr.right, targetSum);
  }
  traversal(root, 0);
  return ans;
};
