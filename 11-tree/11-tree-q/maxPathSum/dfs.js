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
var maxPathSum = function (root) {
  let maxi = -Infinity;
  function traversal(root) {
    if (root == null) return 0;
    // !m2 mark 0 if negation
    let leftSum = Math.max(traversal(root.left), 0);
    let rightSum = Math.max(traversal(root.right), 0);
 
    let sum = leftSum + rightSum + root.val;
    // ! marker for each node 
    maxi = Math.max(maxi, sum);
    //!m1 unable to think 
    const validPathSum = root.val + Math.max(leftSum, rightSum);
    console.log("", root.val, leftSum, rightSum, maxi, validPathSum);

    return validPathSum;
  }
  traversal(root);
  return maxi;
};
