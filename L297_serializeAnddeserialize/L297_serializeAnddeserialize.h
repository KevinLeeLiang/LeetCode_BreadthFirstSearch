//
// Created by garen_lee on 2025/4/2.
/**
  ******************************************************************************
  * @file           : L297_serializeAnddeserialize.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/2
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L297_SERIALIZEANDDESERIALIZE_H
#define BREADTHFIRSTSEARCH_L297_SERIALIZEANDDESERIALIZE_H

#include "util.h"
class L297_serializeAnddeserialize : public LeetcodeBreadthFirstSearch {
private:
    void rserialize(TreeNode* root, string &str);
    string serialize(TreeNode* root);
    TreeNode* rdeserialize(list<string>& data_array);
    TreeNode* deserialize(string data);
public:
    L297_serializeAnddeserialize() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L297_SERIALIZEANDDESERIALIZE_H
