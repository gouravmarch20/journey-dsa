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
var maxDepth = function (root) {
  let queue = [];
  let result = [];
  let maxH = 0;
  if (root == null) return 0;
  const travelS = (root, level) => {
    if (root == null) return;
    maxH = Math.max(maxH, level);
    result[level] = result[level] ? [...result[level], root.val] : [root.val];

    if (root.left) travelS(root.left, level + 1);
    if (root.right) travelS(root.right, level + 1);
  };

  travelS(root, 0);

  return maxH + 1;
};
