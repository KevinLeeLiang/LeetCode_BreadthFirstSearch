//
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L107_levelOrderBottom.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/11
  ******************************************************************************
  */
//

#include "L107_levelOrderBottom.h"

vector<vector<int>> L107_levelOrderBottom::levelOrderBottom(TreeNode *root) {
    if(!root) return {};
    vector<vector<int>> result;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> vec;
        while(size--){
            TreeNode* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            vec.push_back(node->val);
        }
        result.push_back(vec);
    }
    reverse(result.begin(), result.end());
    return result;
}

void L107_levelOrderBottom::test() {
    vector<int> vals = {3, 9, 20, -1, -1, 15, 7};
    TreeNode *root;
    vector<vector<int>> result;
    root = create_treenode(vals, true);
    result = levelOrderBottom(root);
    print_vector_vector(result);
    vals = {1};
    root = create_treenode(vals, true);
    result = levelOrderBottom(root);
    print_vector_vector(result);
    vals = {};
    root = create_treenode(vals, true);
    result = levelOrderBottom(root);
    print_vector_vector(result);
}