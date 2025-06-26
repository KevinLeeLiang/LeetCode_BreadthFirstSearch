//
// Created by garen_lee on 2025/6/25.
/**
  ******************************************************************************
  * @file           : L617_mergeTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/25
  ******************************************************************************
  */
//

#include "L617_mergeTree.h"

TreeNode* L617_mergeTree::mergeTrees(TreeNode* t1, TreeNode* t2) {
    if (t1 == nullptr) {
        return t2;
    }
    if (t2 == nullptr) {
        return t1;
    }
    TreeNode* root = new TreeNode(t1->val + t2->val);
    root->left = mergeTrees(t1->left, t2->left);
    root->right = mergeTrees(t1->right, t2->right);
    return root;
}

void L617_mergeTree::test() {
    vector<int> vec1 = {1, 3, 2, 5};
    TreeNode* root1 = create_treenode(vec1, true);
    vector<int> vec2 = {2, 1, 3, -1, 4, -1, 7};
    TreeNode* root2 = create_treenode(vec2, true);
    TreeNode* root = mergeTrees(root1, root2);
    string ans =  print_tree(root);
    cout << ans << endl;
    vec1 = {1};
    vec2 = {1, 2};
    root1 = create_treenode(vec1, true);
    root2 = create_treenode(vec2, true);
    root = mergeTrees(root1, root2);
    ans =  print_tree(root);
    cout << ans << endl;
}