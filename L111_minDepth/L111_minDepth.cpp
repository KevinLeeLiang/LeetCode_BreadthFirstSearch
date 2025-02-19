//
// Created by garen-lee on 2025/2/19.
/**
  ******************************************************************************
  * @file           : L111_minDepth.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/19
  ******************************************************************************
  */
//

#include "L111_minDepth.h"

int L111_minDepth::minDepth(TreeNode* root) {
    if (!root) {
        return 0;
    }
    queue<pair<TreeNode*, int>> q;
    q.emplace(root, 1);
    while (!q.empty()) {
        TreeNode* node = q.front().first;
        int depth = q.front().second;
        q.pop();
        if (!node->left && !node->right) {
            return depth;
        } else {
            if (node->left) {
                q.emplace(node->left, depth + 1);
            }
            if (node->right) {
                q.emplace(node->right, depth + 1);
            }
        }
    }
    return 0;
}
void L111_minDepth::test() {
    vector<int>vals;
    vals = {3,9,20,-1,-1,15,7};
    TreeNode* root;
    root = create_treenode(vals, true);
    cout << minDepth(root) << endl;
    vals = {2,-1,3,-1,4,-1,5,-1,6};
    root = create_treenode(vals, true);
    cout << minDepth(root) << endl;
}