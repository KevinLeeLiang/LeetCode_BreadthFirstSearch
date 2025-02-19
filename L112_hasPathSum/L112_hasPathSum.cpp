//
// Created by garen-lee on 2025/2/19.
/**
  ******************************************************************************
  * @file           : L112_hasPathSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/19
  ******************************************************************************
  */
//

#include "L112_hasPathSum.h"

bool L112_hasPathSum::hasPathSum(TreeNode* root, int targetSum) {
    if (root == nullptr) {
        return false;
    }
    queue<TreeNode*>q;
    queue<int>q_val;
    q.push(root);
    q_val.push(root->val);
    while (!q.empty()) {
        TreeNode* node = q.front();
        int tmp = q_val.front();
        q.pop();
        q_val.pop();
        if (node->left == nullptr && node->right == nullptr) {
            if (tmp == targetSum)
                return true;
            continue;
        }
        if (node->left != nullptr) {
            q.push(node->left);
            q_val.push(tmp + node->left->val);
        }
        if (node->right != nullptr) {
            q.push(node->right);
            q_val.push(tmp + node->right->val);
        }
    }
    return false;
}

void L112_hasPathSum::test() {
    vector<int> vals;
    vals = {5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, -1, 1};
    int target = 22;
    TreeNode* root = create_treenode(vals, true);
    cout << L112_hasPathSum::hasPathSum(root, target) << endl;
    vals = {1, 2, 3};
    target = 5;
    root = create_treenode(vals, true);
    cout << L112_hasPathSum::hasPathSum(root, target) << endl;
    vals = {};
    target = 0;
    root = create_treenode(vals, true);
    cout << L112_hasPathSum::hasPathSum(root, target) << endl;

}