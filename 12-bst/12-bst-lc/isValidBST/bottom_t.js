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
    //!m3:: not using let variable type 
    let leftMaxi = root.val;
    let rightMini = root.val;
    let isLeftValid = validate(root.left, mini, leftMaxi);
    // if(root.right){
    //  console.log("pre_r" , root.right.val , rightMini , maxi )

    // }
    let isRightValid = validate(root.right, rightMini, maxi);
    console.log("", root.val, mini, maxi, isLeftValid, isRightValid);
    // !m1 :: forgot range base case 
    // !m2 :: equal to case 
    if (root.val <= mini || root.val >= maxi) {
      return false;
    } else {
      return isLeftValid && isRightValid && true;
    }
  }
  return validate(root, -Infinity, Infinity);
  //   return false
};
