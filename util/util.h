//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : util.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_UTIL_H
#define LEETCODE_HASHTABLE_UTIL_H
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <ctime>
#include <climits>
#include <cstdint>
#include<cstdarg>
using namespace std;
class LeetcodeBreadthFirstSearch{
public:
    LeetcodeBreadthFirstSearch() {}
    ~LeetcodeBreadthFirstSearch() {}
    virtual void test() = 0;
};

template<typename T>
void print_vector(vector<T> &vec) {
    for (auto &item : vec) {
        cout << item << " ";
    }
    cout << endl;
    cout <<  "__________" << endl;
}

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


inline TreeNode *createTree(vector<int> tree_vals) {
    if (tree_vals.size() == 0)
        return nullptr;
    queue<TreeNode *> q;
    TreeNode *root = new TreeNode(tree_vals[0]);
    int index = 0;
    q.push(root);
    index++;
    while (!q.empty()) {
        if (index >= tree_vals.size())
            break;
        auto p = q.front();
        q.pop();
        if (index < tree_vals.size() && tree_vals[index] != 0) {
            p->left = new TreeNode(tree_vals[index]);
            q.push(p->left);
        }
        index++;
        if (index < tree_vals.size() && tree_vals[index] != 0) {

            p->right = new TreeNode(tree_vals[index]);
            q.push(p->right);
        }
        index++;
    }
    return root;
}

inline TreeNode *createTree2(vector<int> tree_vals) {
    if (tree_vals.size() == 0)
        return nullptr;
    queue<TreeNode *> q;
    TreeNode *root = new TreeNode(tree_vals[0]);
    int index = 0;
    q.push(root);
    index++;
    while (!q.empty()) {
        if (index >= tree_vals.size())
            break;
        auto p = q.front();
        q.pop();
        if (index < tree_vals.size() && tree_vals[index] >= 0) {
            p->left = new TreeNode(tree_vals[index]);
            q.push(p->left);
        }
        index++;
        if (index < tree_vals.size() && tree_vals[index] >= 0) {

            p->right = new TreeNode(tree_vals[index]);
            q.push(p->right);
        }
        index++;
    }
    return root;
}

inline TreeNode *create_treenode(vector<int> tree_vals, bool is_include_zero) {
    if (is_include_zero) {
        auto *tree = createTree2(tree_vals);
        return tree;
    } else {
        auto *tree = createTree(tree_vals);
        //	cout << tree->val << endl;
        return tree;
    }
}

inline string print_tree(TreeNode *root) {
    string s;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        auto size = q.size();
        for (int i = 0; i < size; ++i) {
            auto node = q.front();
            q.pop();
            if (node == nullptr) {
                s += "0";
            } else {
                s += to_string(node->val);
                q.push(node->left);
                q.push(node->right);
            }
        }
    }
    for (int i = s.size() - 1; i >=0; --i) {
        if (s[i] == '0') {
            s.pop_back();
        } else {
            break;
        }
    }
    return s;
}

#endif //LEETCODE_HASHTABLE_UTIL_H
