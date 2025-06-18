//
// Created by garen_lee on 2025/6/18.
/**
  ******************************************************************************
  * @file           : L559_maxDepth.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/18
  ******************************************************************************
  */
//

#include "L559_maxDepth.h"



L559::Node* buildNAryTree(const vector<int>& nums) {
    if (nums.empty()) return nullptr;

    queue<L559::Node*> q;
    int i = 0;

    L559::Node* root = new L559::Node(nums[i++]);
    q.push(root);
    i++;
    while (i < nums.size()) {
        L559::Node* parent = q.front();
        q.pop();

        while (i < nums.size() && nums[i] != -1) {
            L559::Node* child = new L559::Node(nums[i++]);
            parent->children.push_back(child);
            q.push(child);
        }
        i++; // skip -1
    }

    return root;
}

int L559_maxDepth::maxDepth(L559::Node* root) {
    if (!root) return 0;
    queue<L559::Node*> q;
    q.push(root);
    int depth = 0;
    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            L559::Node* node = q.front();
            q.pop();
            for (auto child : node->children) {
                q.push(child);
            }
        }
        depth++;
    }
    return depth;
}

void L559_maxDepth::test() {
    vector<int> nums = {1, -1, 3, 2, 4, -1, 5, 6};
    L559::Node* root = buildNAryTree(nums);
    cout << maxDepth(root) << endl;
    nums = {1,-1,2,3,4,5,-1,-1,6,7,-1,8,-1,9,10,-1,-1,11,-1,12,-1,13,-1,-1,14};
    root = buildNAryTree(nums);
    cout << maxDepth(root) << endl;
}

