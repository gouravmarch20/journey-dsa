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
var isValidBST = function (root) {
  function validate(root, mini, maxi) {
    if (root == null) return true;
    if (mini >= root.val || root.val >= maxi) {
      return false;
    }

    let curr = root.val;

    let isLeftValid = validate(root.left, mini, curr);

    let isRightValid = validate(root.right, curr, maxi);
    return isLeftValid && isRightValid;
  }
  return validate(root, -Infinity, Infinity);
  //   return false
};
