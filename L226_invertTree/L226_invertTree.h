//
// Created by garen_lee on 2025/3/25.
/**
  ******************************************************************************
  * @file           : L226_invertTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/25
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L226_INVERTTREE_H
#define BREADTHFIRSTSEARCH_L226_INVERTTREE_H

#include "util.h"
class L226_invertTree : public LeetcodeBreadthFirstSearch {
private:
    TreeNode *invertTree(TreeNode *root);
public:
    L226_invertTree() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L226_INVERTTREE_H
