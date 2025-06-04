//
// Created by garen_lee on 2025/6/4.
/**
  ******************************************************************************
  * @file           : L515_largestValues.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/4
  ******************************************************************************
  */
//

#include "L515_largestValues.h"

vector<int> L515_largestValues::largestValues(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    vector<int> res;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        int max_val = INT_MIN;
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            max_val = max(max_val, node->val);
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        res.push_back(max_val);
    }
    return res;
}

void L515_largestValues::test() {
    vector<int>nums = {1,3,2,5,3,-1,9};
    TreeNode* root = create_treenode(nums, true);
    vector<int>res = largestValues(root);
    print_vector(res);
    nums = {1,2,3};
    root = create_treenode(nums, true);
    res = largestValues(root);
    print_vector(res);
}