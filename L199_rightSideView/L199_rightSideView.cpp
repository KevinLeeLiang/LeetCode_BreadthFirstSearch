//
// Created by garen_lee on 2025/3/11.
/**
  ******************************************************************************
  * @file           : L199_rightSideView.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/11
  ******************************************************************************
  */
//

#include "L199_rightSideView.h"

vector<int> L199_rightSideView::rightSideView(TreeNode* root) {
    unordered_map<int, int> rightmostValueAtDepth;
    int max_depth = -1;

    queue<TreeNode*> nodeQueue;
    queue<int> depthQueue;
    nodeQueue.push(root);
    depthQueue.push(0);

    while (!nodeQueue.empty()) {
        TreeNode* node = nodeQueue.front();nodeQueue.pop();
        int depth = depthQueue.front();depthQueue.pop();

        if (node != NULL) {
            // 维护二叉树的最大深度
            max_depth = max(max_depth, depth);

            // 由于每一层最后一个访问到的节点才是我们要的答案，因此不断更新对应深度的信息即可
            rightmostValueAtDepth[depth] =  node -> val;

            nodeQueue.push(node -> left);
            nodeQueue.push(node -> right);
            depthQueue.push(depth + 1);
            depthQueue.push(depth + 1);
        }
    }

    vector<int> rightView;
    for (int depth = 0; depth <= max_depth; ++depth) {
        rightView.push_back(rightmostValueAtDepth[depth]);
    }

    return rightView;
}

void L199_rightSideView::test() {
    vector<int> vals = {1,2,3,-1,5,-1,4};
    TreeNode* root = create_treenode(vals, true);
    vector<int> res = rightSideView(root);
    print_vector(res);
    vals = {1,2,3,4,-1,-1,-1,5};
    root = create_treenode(vals, true);
    res = rightSideView(root);
    print_vector(res);
    vals = {1,-1,3};
    root = create_treenode(vals, true);
    res = rightSideView(root);
    print_vector(res);
    vals = {};
    root = create_treenode(vals, true);
    res = rightSideView(root);
    print_vector(res);
}