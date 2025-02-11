//
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L104_maxDepth.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/11
  ******************************************************************************
  */
//

#include "L104_maxDepth.h"
int L104_maxDepth::dfs(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return max(dfs(root->left), dfs(root->right)) + 1;
}
int L104_maxDepth::maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return dfs(root);
}

int L104_maxDepth::bfs(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    queue<TreeNode*> q;
    q.push(root);
    int depth = 0;
    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            TreeNode* node = q.front();
            q.pop();
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        depth++;
    }
    return depth;
}
void L104_maxDepth::test() {
    vector<int> vals = {3, 9, 20, -1, -1, 15, 7};
    TreeNode* root;
    root = create_treenode(vals, true);
    cout << "dfs," <<maxDepth(root) << ",bfs." <<bfs(root) << endl;
    vals = {1, -1, 2};
    root = create_treenode(vals, true);
    cout << "dfs," <<maxDepth(root) << ",bfs." <<bfs(root) << endl;
}