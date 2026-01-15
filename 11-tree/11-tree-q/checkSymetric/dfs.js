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
var isSymmetric = function (root) {
  const checkSymetric = (left, right) => {
    if (left == null && right == null) return true;
    if (left == null || right == null) return false;
    if (left.val != right.val) return false;
    //
    const leftCheck = checkSymetric(left.left, right.right);
    const rightCheck = checkSymetric(left.right, right.left);
    return leftCheck && rightCheck;
  };
  return checkSymetric(root.left, root.right);
};
