//
// Created by garen-lee on 2025/1/30.
/**
  ******************************************************************************
  * @file           : L101_isSymmetric.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/30
  ******************************************************************************
  */
//

#include "L101_isSymmetric.h"

bool L101_isSymmetric::check(TreeNode *left, TreeNode *right) {
    if (left == nullptr && right == nullptr){
        return true;
    }
    if (left == nullptr || right == nullptr)
        return false;

    return left->val == right->val && check(left->left, right->right) && check(left->right, right->left);
}

bool L101_isSymmetric::isSymmetric(TreeNode *root) {
    if (root == nullptr)
        return true;
    return check(root->left, root->right);
}

void L101_isSymmetric::test() {
    vector<int> vals;
    TreeNode* root = nullptr;
    vals = {1,2,2,3,4,4,3};
    root = createTree(vals);;
    cout << isSymmetric(root) << endl;
    vals = {1,2,2,-1,3,-1,3};
    root = createTree(vals);
    cout << isSymmetric(root) << endl;
}