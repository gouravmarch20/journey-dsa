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
 * @param {TreeNode} subRoot
 * @return {boolean}
 */
var isSubtree = function (root, subRoot) {
  let hashRoot = generateRoot(root);
  let hasSubRoot = generateRoot(subRoot);
  // console.log("debug__9"  , hashRoot , hasSubRoot )
  return hashRoot.includes(hasSubRoot);
};
function generateRoot(root) {
  let hash = "";
  const traversal = (root) => {
    if (root == null) {
      hash += "_" + "#";
      return;
    }
    hash += "_" + root.val;
    traversal(root.left);
    traversal(root.right);
  };
  traversal(root);
  return hash;
}
