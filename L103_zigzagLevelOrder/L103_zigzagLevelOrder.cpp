//
// Created by garen_lee on 2025/2/6.
/**
  ******************************************************************************
  * @file           : L103_zigzagLevelOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/6
  ******************************************************************************
  */
//

#include "L103_zigzagLevelOrder.h"
vector<vector<int>> L103_zigzagLevelOrder::zigzagLevelOrder(TreeNode* root) {
    if (!root) {
        return {};
    }
    vector<vector<int>> res;
    queue<TreeNode*> q;
    q.push(root);
    bool flag = false;
    while (!q.empty()) {
        int size = q.size();
        deque<int> level;
        while (size--) {
            TreeNode* node = q.front();
            q.pop();
            if (flag) {
                level.push_front(node->val);
            } else {
                level.push_back(node->val);
            }
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        flag = !flag;
        res.push_back(vector<int>(level.begin(), level.end()));
    }
    return res;
}
void L103_zigzagLevelOrder::test() {
    vector<vector<int>> res;
    vector<int> vec;
    TreeNode* root;
    vec = {3,9,20,-1,-1,15,7};
    root = create_treenode(vec, true);
    res = zigzagLevelOrder(root);
    for (auto &item : res) {
        print_vector(item);
    }
    cout << "++++" << endl;
    vec = {1};
    root = create_treenode(vec, true);
    res = zigzagLevelOrder(root);
    for (auto &item : res) {
        print_vector(item);
    }
    cout << "++++" << endl;
    vec = {};
    root = create_treenode(vec, true);
    res = zigzagLevelOrder(root);
    for (auto &item : res) {
        print_vector(item);
    }
    cout << "++++" << endl;

}