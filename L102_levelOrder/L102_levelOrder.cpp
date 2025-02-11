
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L102_levelOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
<<<<<<< Updated upstream
  * @date           : 2025/2/6
=======
  * @date           : 2025/2/11
>>>>>>> Stashed changes
  ******************************************************************************
  */
//

#include "L102_levelOrder.h"
vector<vector<int>> L102_levelOrder::levelOrder(TreeNode* root) {
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
    return result;
}

void L102_levelOrder::test() {
    vector<int> vals;
    vector<vector<int>> result;
    TreeNode* root;
    vals = {3, 9, 20, -1, -1, 15, 7};
    root = create_treenode(vals, true);
    result = levelOrder(root);
    for (auto i : result) {
        print_vector(i);
    }
    cout << "++++" << endl;
    vals = {1};
    root = create_treenode(vals, true);
    result = levelOrder(root);
    for (auto i : result) {
        print_vector(i);
    }
    cout << "++++" << endl;
    vals = {};
    root = create_treenode(vals, true);
    result = levelOrder(root);
    for (auto i : result) {
        print_vector(i);
    }
    cout << "++++" << endl;
}