//
// Created by garen_lee on 2025/5/14.
/**
  ******************************************************************************
  * @file           : L449_serializeAnddeserialize.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/14
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L449_SERIALIZEANDDESERIALIZE_H
#define BREADTHFIRSTSEARCH_L449_SERIALIZEANDDESERIALIZE_H

#include "util.h"
class L449_serializeAnddeserialize : public LeetcodeBreadthFirstSearch {
private:
    string serialize(TreeNode* root);
    TreeNode* deserialize(string data);
    void postOrder(TreeNode *root,vector<int> & arr);
    vector<string> split(const string &str, char dec);
    TreeNode * construct(int lower, int upper, stack<int> & st);
public:
    L449_serializeAnddeserialize() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L449_SERIALIZEANDDESERIALIZE_H
