class Solution {
public:
	void parnentPoint(unordered_map<TreeNode* , TreeNode*> &mp , TreeNode*root){
		if(root == nullptr) return ;
		if(root->left != nullptr) {
			mp[root->left] = root;
			parnentPoint(mp , root->left);
		}
		if(root->right != nullptr){
			mp[root->right] = root;
			parnentPoint(mp , root->right);
		}
	}
	vector<int> distanceK(TreeNode* root, TreeNode* target, int k){
		//your code goes here
		unordered_map<TreeNode* , TreeNode*> mp;
		// !m2 :: did no dry run -=--> for visited need
		unordered_set<TreeNode*> visited;
		        visited.insert(target);

		parnentPoint(mp , root );
		vector<int> res;
 

		queue <TreeNode*> q;
		q.push(target);
		// 
		int cnt = 0; 
		while(!q.empty()){
			if(cnt == k){
				break;
			}
			int size = q.size();
			for(int i = 0 ; i < size ; i++){
				auto node = q.front();
				q.pop();
				if(node->right != nullptr  && visited.find(node->right) == visited.end()){
					q.push(node->right);
					                    visited.insert(node->right);

				}
					if(node->left != nullptr && visited.find(node->left) == visited.end()){
					q.push(node->left);
					                    visited.insert(node->left);

				}
				if(mp.find(node) != mp.end() && visited.find(mp[node]) == visited.end()){
					  q.push(mp[node]);
                    visited.insert(mp[node]);
				}
			}
			cnt++;
		}
		//! m1 :: q can not itterate
		// for(auto it : q){
		// 	res.push(it->data);
		// }
		while(!q.empty()){
			res.push_back(q.front()->data);
			q.pop();
		}
		return res;
    }
};