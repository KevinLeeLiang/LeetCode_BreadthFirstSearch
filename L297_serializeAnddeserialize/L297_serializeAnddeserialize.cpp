//
// Created by garen_lee on 2025/4/2.
/**
  ******************************************************************************
  * @file           : L297_serializeAnddeserialize.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/2
  ******************************************************************************
  */
//

#include "L297_serializeAnddeserialize.h"

void L297_serializeAnddeserialize::rserialize(TreeNode* root, string& str) {
    if (root == nullptr) {
        str += "null,";
    } else {
        str += to_string(root->val) + ",";
        rserialize(root->left, str);
        rserialize(root->right, str);
    }
}

string L297_serializeAnddeserialize::serialize(TreeNode* root) {
    string str;
    rserialize(root, str);
    return str;
}

TreeNode* L297_serializeAnddeserialize::rdeserialize(list<string>& data_array) {
    if (data_array.front() == "None") {
        data_array.erase(data_array.begin());
        return nullptr;
    }
    TreeNode* root = new TreeNode(stoi(data_array.front()));
    data_array.erase(data_array.begin());
    root->left = rdeserialize(data_array);
    root->right = rdeserialize(data_array);
    return root;
}

TreeNode* L297_serializeAnddeserialize::deserialize(string data) {
    list<string> dataArray;
    string str;
    for (auto& ch : data) {
        if (ch == ',') {
            dataArray.push_back(str);
            str.clear();
        } else {
            str.push_back(ch);
        }
    }
    if (!str.empty()) {
        dataArray.push_back(str);
    }
    return rdeserialize(dataArray);
}

void L297_serializeAnddeserialize::test() {
    vector<int>nums = {1, 2, 3, -1, -1, 4, 5};
    TreeNode* root = create_treenode(nums, true);
    cout << serialize(root) << endl;
}