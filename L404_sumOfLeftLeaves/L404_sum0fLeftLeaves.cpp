//
// Created by garen-lee on 2025/4/30.
/**
  ******************************************************************************
  * @file           : L404_sum0fLeftLeaves.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/30
  ******************************************************************************
  */
//

#include "L404_sum0fLeftLeaves.h"

bool L404_sum0fLeftLeaves::isLeafNode(TreeNode* node) {
    return !node->left && !node->right;
}

int L404_sum0fLeftLeaves::sumOfLeftLeaves(TreeNode* root) {
    if (!root) {
        return 0;
    }

    queue<TreeNode*> q;
    q.push(root);
    int ans = 0;
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        if (node->left) {
            if (isLeafNode(node->left)) {
                ans += node->left->val;
            }
            else {
                q.push(node->left);
            }
        }
        if (node->right) {
            if (!isLeafNode(node->right)) {
                q.push(node->right);
            }
        }
    }
    return ans;
}

void L404_sum0fLeftLeaves::test() {
    vector<int> nums = {3,9,20,-1,-1,15,7};
    TreeNode* root = create_treenode(nums, true);
    cout << sumOfLeftLeaves(root) << endl;
    nums = {1};
    root = create_treenode(nums, true);
    cout << sumOfLeftLeaves(root) << endl;
}