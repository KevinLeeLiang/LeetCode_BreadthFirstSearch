//
// Created by garen_lee on 2025/3/25.
/**
  ******************************************************************************
  * @file           : L226_invertTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/25
  ******************************************************************************
  */
//

#include "L226_invertTree.h"

TreeNode* L226_invertTree::invertTree(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }
    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);
    root->left = right;
    root->right = left;
    return root;
}

void L226_invertTree::test() {
    vector<int>nums = {4,2,7,1,3,6,9};
    TreeNode* root = create_treenode(nums, true);
    TreeNode* ans = invertTree(root);
    cout << print_tree(ans) << endl;
    nums = {2,1,3};
    root = create_treenode(nums, true);
    ans = invertTree(root);
    cout << print_tree(ans) << endl;
    nums = {};
    root = create_treenode(nums, true);
    ans = invertTree(root);
    cout << print_tree(ans) << endl;

}