//
// Created by garen_lee on 2025/7/2.
/**
  ******************************************************************************
  * @file           : L637_averageOfLevels.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/2
  ******************************************************************************
  */
//

#include "L637_averageOfLevels.h"

vector<double> L637_averageOfLevels::averageOfLevels(TreeNode* root) {
    vector<double>res;
    if (!root) return res;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        double sum = 0;
        for (int i = 0; i < size; ++i) {
            auto node = q.front();
            q.pop();
            sum += node->val;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        res.push_back(sum/size);
    }
    return res;
}

void L637_averageOfLevels::test() {
    vector<int> val = {3, 9, 20, -1, -1, 15, 7};
    TreeNode* root = create_treenode(val, true);
    vector<double> res = averageOfLevels(root);
    print_vector(res);
    val = {3, 9, 20, 15, 7};
    root = create_treenode(val, true);
    res = averageOfLevels(root);
    print_vector(res);
}