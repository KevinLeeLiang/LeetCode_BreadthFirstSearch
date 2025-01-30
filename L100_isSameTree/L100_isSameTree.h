//
// Created by garen-lee on 2025/1/30.
/**
  ******************************************************************************
  * @file           : L100_isSameTree.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/30
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L100_ISSAMETREE_H
#define BREADTHFIRSTSEARCH_L100_ISSAMETREE_H

#include "util.h"
class L100_isSameTree  : public LeetcodeBreadthFirstSearch{
private:
    bool isSameTree(TreeNode *p, TreeNode *q);
public:
    L100_isSameTree(){}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L100_ISSAMETREE_H
