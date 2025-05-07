//
// Created by garen_lee on 2025/5/7.
/**
  ******************************************************************************
  * @file           : L429_levelOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/7
  ******************************************************************************
  */
//

#include "L429_levelOrder.h"
vector<vector<int>> L429_levelOrder::levelOrder(L429::Node* root) {
    if (!root) return {};
    queue<L429::Node*>q;
    q.push(root);
    vector<vector<int>> res;
    while (!q.empty()) {
        vector<int> tmp;
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            L429::Node* node = q.front();
            q.pop();
            tmp.push_back(node->val);
            for (auto child : node->children) {
                q.push(child);
            }
        }
        res.push_back(tmp);
    }
    return res;
}

void L429_levelOrder::test() {
    vector<int> vals = {1,3,2,4,-1,5,6};
    L429::Node* root = L429::createNode(vals);
    vector<vector<int>> res = levelOrder(root);
    print_vector_vector(res);
}