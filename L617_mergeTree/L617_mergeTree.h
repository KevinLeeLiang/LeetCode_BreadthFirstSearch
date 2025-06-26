//
// Created by garen_lee on 2025/6/25.
/**
  ******************************************************************************
  * @file           : L617_mergeTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/25
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L617_MERGETREE_H
#define BREADTHFIRSTSEARCH_L617_MERGETREE_H

#include "util.h"
class L617_mergeTree : public LeetcodeBreadthFirstSearch {
private:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2);
public:
    L617_mergeTree() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L617_MERGETREE_H
