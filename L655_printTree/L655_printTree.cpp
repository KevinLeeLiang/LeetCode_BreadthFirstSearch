//
// Created by garen_lee on 2025/7/9.
/**
  ******************************************************************************
  * @file           : L655_printTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/9
  ******************************************************************************
  */
//

#include "L655_printTree.h"

int calDepth(TreeNode* root) {
    int h = 0;
    if (root->left) {
        h = max(h, calDepth(root->left) + 1);
    }
    if (root->right) {
        h = max(h, calDepth(root->right) + 1);
    }
    return h;
}


void L655_printTree::dfs(vector<vector<string>> &res, TreeNode *root, int r, int c, const int& layer) {
    res[r][c] = to_string(root->val);
    if (root->left) {
        dfs(res, root->left, r + 1, c - (1 << (layer - r - 1)), layer);
    }
    if (root->right) {
        dfs(res, root->right, r + 1, c + (1 << (layer - r - 1)), layer);
    }
}

vector<vector<string>> L655_printTree::printTree(TreeNode *root) {
    int layers = 0;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        layers++;
        for (int i = 0; i < size; i++) {
            TreeNode *node = q.front();
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    int n = (1 << (layers)) - 1;
    vector<vector<string>> res(layers, vector<string>(n, ""));
    dfs(res, root, 0, (n - 1) / 2, layers - 1);
    return res;
}

void L655_printTree::test() {
    vector<int> nums = {1, 2};
    TreeNode *root = create_treenode(nums, true);
    vector<vector<string>> res = printTree(root);
    print_vector_vector(res);
    nums = {1, 2, 3, -1, 4};
    root = create_treenode(nums, true);
    res = printTree(root);
    print_vector_vector(res);
}