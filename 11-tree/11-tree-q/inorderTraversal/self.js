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
 * @return {number[]}
 */
const inTraversal = (root, res) => {
  if (root == null) return;
  inTraversal(root.left, res);
  res.push(root.val);
  inTraversal(root.right, res);
};
var inorderTraversal = function (root) {
  const res = [];
  inTraversal(root, res);
  return res;
};
