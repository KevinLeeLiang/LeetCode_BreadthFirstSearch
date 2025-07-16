//
// Created by garen_lee on 2025/7/16.
/**
  ******************************************************************************
  * @file           : L662_widthOfBinaryTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/16
  ******************************************************************************
  */
//

#include "L662_widthOfBinaryTree.h"

int L662_widthOfBinaryTree::widthOfBinaryTree(TreeNode *root) {
    unsigned long long res = 1;
    vector<pair<TreeNode*, unsigned long long>> arr;
    arr.emplace_back(root, 1L);
    while (!arr.empty()) {
        vector<pair<TreeNode*, unsigned long long>> tmp;
        for (auto &[node, index] : arr) {
            if (node->left) {
                tmp.emplace_back(node->left, index * 2);
            }
            if (node->right) {
                tmp.emplace_back(node->right, index * 2 + 1);
            }
        }
        res = max(res, arr.back().second - arr[0].second + 1);
        arr = move(tmp);
    }
    return res;
}

void L662_widthOfBinaryTree::test() {
    vector<int> nums = {1, 3, 2, 5, 3, -1, 9};
    TreeNode *root = create_treenode(nums, true);
    cout << widthOfBinaryTree(root) << endl;
    nums = {1, 3, 2, 5, -1, -1, 9, 6, -1, 7};
    root = create_treenode(nums, true);
    cout << widthOfBinaryTree(root) << endl;
    nums = {1, 3, 2, 5};
    root = create_treenode(nums, true);
    cout << widthOfBinaryTree(root) << endl;
}