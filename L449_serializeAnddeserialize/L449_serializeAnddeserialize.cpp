//
// Created by garen_lee on 2025/5/14.
/**
  ******************************************************************************
  * @file           : L449_serializeAnddeserialize.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/14
  ******************************************************************************
  */
//

#include "L449_serializeAnddeserialize.h"
void L449_serializeAnddeserialize::postOrder(TreeNode *root,vector<int> & arr) {
    if (root == nullptr) {
        return;
    }
    postOrder(root->left, arr);
    postOrder(root->right, arr);
    arr.emplace_back(root->val);
}

vector<string> L449_serializeAnddeserialize::split(const string &str, char dec) {
    int pos = 0;
    int start = 0;
    vector<string> res;
    while (pos < str.size()) {
        while (pos < str.size() && str[pos] == dec) {
            pos++;
        }
        start = pos;
        while (pos < str.size() && str[pos] != dec) {
            pos++;
        }
        if (start < str.size()) {
            res.emplace_back(str.substr(start, pos - start));
        }
    }
    return res;
}
string L449_serializeAnddeserialize::serialize(TreeNode* root) {
    string res;
    vector<int>arr;
    postOrder(root, arr);
    if (arr.size() == 0) {
        return res;
    }
    for (int i = 0; i < arr.size() - 1; i++) {
        res.append(to_string(arr[i]) + ",");
    }
    res.append(to_string(arr.back()));
    return res;
}
TreeNode * L449_serializeAnddeserialize::construct(int lower, int upper, stack<int> & st) {
    if (st.size() == 0 || st.top() < lower || st.top() > upper) {
        return nullptr;
    }
    int val = st.top();
    st.pop();
    TreeNode *root = new TreeNode(val);
    root->right = construct(val, upper, st);
    root->left = construct(lower, val, st);
    return root;
}
TreeNode* L449_serializeAnddeserialize::deserialize(string data) {
    if (data.size() == 0) {
        return nullptr;
    }
    vector<string> arr = split(data, ',');
    stack<int> st;
    for (auto & str : arr) {
        st.emplace(stoi(str));
    }
    return construct(INT_MIN, INT_MAX, st);
}

void L449_serializeAnddeserialize::test() {
    vector<int>nums = {1,2,3};
    TreeNode* root = create_treenode(nums, true);
    cout << serialize(root) << endl;
    nums = {};
    root = create_treenode(nums, true);
    cout << serialize(root) << endl;
}