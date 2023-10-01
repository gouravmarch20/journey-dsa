// /**
//  * Definition for a binary tree node.
//  * public class TreeNode {
//  *     int val;
//  *     TreeNode left;
//  *     TreeNode right;
//  *     TreeNode() {}
//  *     TreeNode(int val) { this.val = val; }
//  *     TreeNode(int val, TreeNode left, TreeNode right) {
//  *         this.val = val;
//  *         this.left = left;
//  *         this.right = right;
//  *     }
//  * }
//  */
// class Solution {
//     HashMap<Integer,Integer> h;
//     int i=0;
//     public TreeNode constructBT(int[] preorder,int start,int end){
//         if(start>end) return null;
//         TreeNode root=new TreeNode(preorder[i]);
//         int idx=h.get(preorder[i]);
//         i++;
//         root.left=constructBT(preorder,start,idx-1);
//         root.right=constructBT(preorder,idx+1,end);
//         return root;
//     }
//     public TreeNode buildTree(int[] preorder, int[] inorder) {
//         h=new HashMap<>();
//         for(int i=0;i<inorder.length;i++){
//             h.put(inorder[i],i);
//         }
//         return constructBT(preorder,0,preorder.length-1);
//     }
// }