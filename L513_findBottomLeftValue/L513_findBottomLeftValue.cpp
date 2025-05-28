//
// Created by garen_lee on 2025/5/28.
/**
  ******************************************************************************
  * @file           : L513_findBottomLeftValue.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/28
  ******************************************************************************
  */
//

#include "L513_findBottomLeftValue.h"

int L513_findBottomLeftValue::findBottomLeftValue(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    queue<TreeNode*> q;
    q.push(root);
    int layer = 0;
    int res = root->val;
    while (!q.empty()) {
        int size =  q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            if (i == 0) {
                res = node->val;
            }
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
    }
    return res;
}

void L513_findBottomLeftValue::test() {
    vector<int> input = {2,1,3};
    TreeNode* root = create_treenode(input, true);
    cout << findBottomLeftValue(root) << endl;
    input = {1,2,3,4,-1,5,6,-1,-1,7};
    root = create_treenode(input, true);
    cout << findBottomLeftValue(root) << endl;
}