  while(!q.empty()){
                    vector <int> level ;
                    for(int i = 0 ; i < q.size() ; i++){
                        TreeNode* node = q.front();
                        q.pop();
                        level.push_back(node->data);
                        // 
                        if(node->left != nullptr){
                             q.push(node->left);
                        }
                        if(node->right != nullptr){
                             q.push(node->right);
                        }
                        

                    }
                    ans.push_back(level);

                }