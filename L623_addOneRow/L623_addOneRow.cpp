//
// Created by garen_lee on 2025/6/25.
/**
  ******************************************************************************
  * @file           : L623_addOneRow.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/25
  ******************************************************************************
  */
//

#include "L623_addOneRow.h"

TreeNode* L623_addOneRow::addOneRow(TreeNode* root, int val, int depth) {
    if (root == nullptr) {
        return nullptr;
    }
    if (depth == 1) {
        return new TreeNode(val, root, nullptr);
    }
    if (depth == 2) {
        root->left = new TreeNode(val, root->left, nullptr);
        root->right = new TreeNode(val, nullptr, root->right);
    } else {
        root->left = addOneRow(root->left, val, depth - 1);
        root->right = addOneRow(root->right, val, depth - 1);
    }
    return root;
}

void L623_addOneRow::test() {
    vector<int>nums = {4,2,6,3,1,5};
    int val = 1, depth = 2;
    TreeNode *root = create_treenode(nums, true);
    TreeNode* ans = addOneRow(root, val, depth);
    cout << print_tree(ans) << endl;
    nums = {4,2,-1,3,1};
    val = 1;
    depth = 3;
    root = create_treenode(nums, true);
    ans = addOneRow(root, val, depth);
    cout << print_tree(ans) << endl;
}