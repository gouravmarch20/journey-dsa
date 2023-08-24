class TreeNode {
  constructor(val) {
    this.val = val
    this.left = null
    this.right = null
  }
}

let index1 = 0

function buildTree(arr) {
  if (index1 >= arr.length || arr[index1] === -1) {
    index1++
    return null
  }

  let root = new TreeNode(arr[index1])
  index1++
  root.left = buildTree(arr)
  root.right = buildTree(arr)

  return root
}

function levelOrderTraversal(root) {
  let ans = []
  let q = []

  if (root === null) {
    return ans
  }

  q.push(root)

  while (q.length > 0) {
    let size = q.length
    let ansArrItem = []

    while (size > 0) {
      let temp = q.shift()
      ansArrItem.push(temp.val)
      if (temp.left !== null) {
        q.push(temp.left)
      }
      if (temp.right !== null) {
        q.push(temp.right)
      }
      size--
    }
    ans.push(ansArrItem)
  }
  return ans
}

function getHeight(root) {
  if (root === null) {
    return 0
  }

  let leftHeight = getHeight(root.left)
  let rightHeight = getHeight(root.right)
  let ans = 1 + Math.max(leftHeight, rightHeight)

  return ans
}

function isBalanced(root) {
  if (root === null) {
    return true
  }
  let leftHeight = getHeight(root.left)
  let rightHeight = getHeight(root.right)
  let diff = Math.abs(leftHeight - rightHeight)
  console.log(diff);
//   if(diff > 1){
//     return false;
//   }
  let isCurrNodeValid = diff <= 1
  let leftAns = isBalanced(root.left)
  let rightAns = isBalanced(root.right)
//   console.log(root.val, isCurrNodeValid, leftAns, rightAns)
  return isCurrNodeValid && leftAns && rightAns
}

// let arr = [10, 20, 40, -1, -1, 50, -1, -1, 30, -1, -1]
let arr = [7, 10, 18, 20, -1, -1, -1, -1, 12, -1, -1]
let root = buildTree(arr)
console.log(isBalanced(root))
