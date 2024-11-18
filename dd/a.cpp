
        while (!q.empty()) {
            // Get the size of the current level
            int size = q.size(); 
            // Create a vector to store nodes at the current level
            vector<int> level; 

            for (int i = 0; i < size; i++) {
                 TreeNode* node = q.front(); 
                 q.pop(); 
                 level.push_back(node->data); 

                 if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
             ans.push_back(level); 
        }