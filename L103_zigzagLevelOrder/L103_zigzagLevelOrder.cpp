// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L103_zigzagLevelOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
<<<<<<< Updated upstream
  * @date           : 2025/2/6
=======
  * @date           : 2025/2/11
>>>>>>> Stashed changes
  ******************************************************************************
  */
//

#include "L103_zigzagLevelOrder.h"

vector<vector<int>> L103_zigzagLevelOrder::zigzagLevelOrder(TreeNode* root) {
    if (!root) {
        return {};
    }
    vector<vector<int>>result;
    queue<TreeNode*>q;
    q.push(root);
    bool flag = false;
    while (!q.empty()) {
        int size = q.size();
        deque<int>level;
        for (int i = 0; i < size; ++i) {
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
        result.push_back(vector<int>(level.begin(), level.end()));
    }
    return result;
}

void L103_zigzagLevelOrder::test() {
    vector<int>vals;
    vector<vector<int>>result;
    TreeNode* root;
    vals = {3,9,20,-1,-1,15,7};
    root = create_treenode(vals, true);
    result = zigzagLevelOrder(root);
    print_vector_vector(result);
    vals = {1};
    root = create_treenode(vals, true);
    result = zigzagLevelOrder(root);
    print_vector_vector(result);
    vals = {};
    root = create_treenode(vals, true);
    result = zigzagLevelOrder(root);
    print_vector_vector(result);

}