//
// Created by garen_lee on 2025/6/11.
/**
  ******************************************************************************
  * @file           : L530_getMinimumDifference.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/11
  ******************************************************************************
  */
//

#include "L530_getMinimumDifference.h"

void L530_getMinimumDifference::dfs(TreeNode* root, int& pre, int& ans) {
    if (root == nullptr) {
        return;
    }
    dfs(root->left, pre, ans);
    if (pre == -1) {
        pre = root->val;
    } else {
        ans = min(ans, root->val - pre);
        pre = root->val;
    }
    dfs(root->right, pre, ans);
}

int L530_getMinimumDifference::getMinimumDifference(TreeNode* root) {
    int pre = -1;
    int ans = INT_MAX;
    dfs(root, pre, ans);
    return ans;
}

void L530_getMinimumDifference::test() {
    vector<int> nums = {4, 2, 6, 1, 3};
    TreeNode *root = create_treenode(nums, true);
    cout << getMinimumDifference(root) << endl;
    nums = {1, 0, 48, -1, -1, 12, 49};
    root = create_treenode(nums, true);
    cout << getMinimumDifference(root) << endl;

}