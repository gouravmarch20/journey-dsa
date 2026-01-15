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
 * @return {boolean}
 */
var isBalanced = function (root) {
  let ans = true;
  const checkHeight = (root) => {
    if (root == null) return 0;
    const leftH = checkHeight(root.left);
    const rightH = checkHeight(root.right);
    if (Math.abs(leftH - rightH) > 1) ans = false;
    return Math.max(leftH, rightH) + 1;
  };
  checkHeight(root);
  return ans;
};
