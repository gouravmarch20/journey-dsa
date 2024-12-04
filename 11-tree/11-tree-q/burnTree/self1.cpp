// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int data;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
//  * };
//  **/

// class Solution{
// 	public:
// 		TreeNode* pointParent(TreeNode * root , unordered_map<TreeNode*,TreeNode*> &mp ,int start){
// 			queue<TreeNode*> q; 
// 			q.push(root);
// 			// ! m4 :: can not leave empty
// 			TreeNode* burnStar = nullptr;
			
// 			while(!q.empty()){
// 				TreeNode* node = q.front();
// 				q.pop();
// 				if(node->data == start){
// 					burnStar = node;
// 				}
// 				if(node->left != nullptr ){
// 					q.push(node->left);
// 					mp[node->left] = node ;
// 				}
// 				if(node->right != nullptr ){
// 					q.push(node->right);
// 					mp[node->right] = node ;
// 				}
// 			}

// 		return burnStar ;
// 		}
// 		int timeToBurnTree(TreeNode* root, int start){
//             //your code goes here
// 			unordered_map<TreeNode*,TreeNode*> mp;
// 			TreeNode * newRoot = pointParent(root , mp , start);
// 			if (newRoot == nullptr) return 0; // Start node not found

// 			// 
// 			queue <TreeNode*> qBurn;
// 			unordered_set <TreeNode*> visited ;
// 			qBurn.push(newRoot);
// 			int burnTime = 0 ;
// 			// !m2 :: forgot to mark 
// 			visited.insert(newRoot);
// 			// 
// 			while(!qBurn.empty()){
//   				int size = qBurn.size();
// 				// !m3 :: did pop before getting size
//      			bool burnedThisLevel = false;

// 				for(int i = 0 ; i < size ; i++){
// 					// !m4 pop , front  do inside loop
// 					auto node = qBurn.front();
// 					qBurn.pop();

// 					//m1: if == then not found ==>   visited.find(node->left) != visited.end()
// 					if(node->left != nullptr && visited.find(node->left) == visited.end() ){
// 					qBurn.push(node->left);
// 					visited.insert(node->left);
//             burnedThisLevel = true;

// 					}
					
					
// 					if(node->right != nullptr && visited.find(node->right) == visited.end() ){
// 					qBurn.push(node->right);
// 					visited.insert(node->right);
// 					            burnedThisLevel = true;

// 					}
// 					// if(mp.find(node) != mp.end() && visited.find(node) == visited.end()){
				 
// 					// ! m6 need to check either top is burned on not 
// 					if (mp.find(node) != mp.end() && visited.find(mp[node]) == visited.end()) {
//  					   qBurn.push(mp[node]);
//     					visited.insert(mp[node]);
//     					burnedThisLevel = true;
// 					}
					
// 				}
// 				// !m5 :: avoid if leaf node all case
// 				 if (burnedThisLevel) {
//        				 burnTime++;
//     				}


// 			}

// 		return burnTime;
// 		}	
// };