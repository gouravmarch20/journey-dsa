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
var hasPathSum = function (root, targetSum) {
  let found = false;
  const getValidPath = (root, currSum, level) => {
    if (root == null) return;
    currSum += root.val;
    console.log("hitmon_", root.val, currSum);
    //!m1 :: leaf not must 
    // if(currSum == targetSum &&( level != 0  || (!root.left && !root.right ) )) found = true ;

    if (currSum == targetSum && !root.left && !root.right) found = true;

    //
    if (root.left) {
        //!m2 :: no need dfs each itterate 
      //   currSum += root.left.val;
      getValidPath(root.left, currSum, level + 1);
      // ! m3:: old value destoruy as function end 
      // currSum -= root.left.val;
    }

    if (root.right) {
      // currSum += root.right.val;

      getValidPath(root.right, currSum, level + 1);
      //   currSum -=  root.right.val;
    }
  };
  getValidPath(root, 0, 0);
  return found;
};
