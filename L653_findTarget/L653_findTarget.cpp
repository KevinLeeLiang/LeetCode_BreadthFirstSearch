//
// Created by garen_lee on 2025/7/2.
/**
  ******************************************************************************
  * @file           : L653_findTarget.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/2
  ******************************************************************************
  */
//

#include "L653_findTarget.h"

bool L653_findTarget::dfs(TreeNode *root, int k) {
    if (!root) return false;
    if (map.count(root->val)) return true;
    map[k - root->val] = root->val;
    return dfs(root->left, k) || dfs(root->right, k);
}

bool L653_findTarget::findTarget(TreeNode *root, int k) {
    map.clear();
    return dfs(root, k);
}

void L653_findTarget::test() {
    vector<int> nums = {5, 3, 6, 2, 4, -1, 7};
    int target = 9;
    TreeNode *root = create_treenode(nums, true);
    cout << findTarget(root, target) << endl;
    nums = {5, 3, 6, 2, 4, -1, 7};
    target = 28;
    root = create_treenode(nums, true);
    cout << findTarget(root, target) << endl;
}