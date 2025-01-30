//
// Created by garen-lee on 2025/1/30.
/**
  ******************************************************************************
  * @file           : L100_isSameTree.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/30
  ******************************************************************************
  */
//

#include "L100_isSameTree.h"

bool L100_isSameTree::isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr)
        return true;
    if (p == nullptr || q == nullptr)
        return false;
    if (p->val != q->val)
        return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
void L100_isSameTree::test() {
    vector<int> lp, lq;
    lp = {1, 2, 3};
    lq = {1, 2, 3};
    TreeNode* p, *q;
    p = create_treenode(lp, true);
    q = create_treenode(lq, true);
    cout << isSameTree(p, q) << endl;
    lp = {1, 2};
    lq = {1, -1, 2};
    p = create_treenode(lp, true);
    q = create_treenode(lq, true);
    cout << isSameTree(p, q) << endl;
    lp = {1, 2, 1};
    lq = {1, 1, 2};
    p = create_treenode(lp, true);
    q = create_treenode(lq, true);
    cout << isSameTree(p, q) << endl;
}