//
// Created by garen_lee on 2025/2/25.
/**
  ******************************************************************************
  * @file           : L116_connect.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/25
  ******************************************************************************
  */
//

#include "L116_connect.h"

Node* L116_connect::connect(Node *root) {
    if (!root) {
        return nullptr;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node *node = q.front();
            q.pop();
            if (i < size - 1) {
                node->next = q.front();
            }
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
    }
    return root;
}

void L116_connect::test() {
    vector<int> tree_vals = {1, 2, 3, 4, 5, 6, 7};
    Node *root = create_node(tree_vals);
    Node* res = connect(root);
    print_node(res);
    tree_vals = {};
    root = create_node(tree_vals);
    res =  connect(root);
    print_node(res);
}