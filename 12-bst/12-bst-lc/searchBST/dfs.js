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
 * @param {number} val
 * @return {TreeNode}
 */
var searchBST = function (root, val) {
  function search(root, target) {
    //! return null
    if (root == null) return null;
    if (root.val == target) {
      return root;
    } else if (root.val < target) {
      return search(root.right, target);
    } else {
      return search(root.left, target);
    }
  }
  return search(root, val);
};
