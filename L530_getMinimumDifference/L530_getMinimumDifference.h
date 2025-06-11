//
// Created by garen_lee on 2025/6/11.
/**
  ******************************************************************************
  * @file           : L530_getMinimumDifference.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/11
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L530_GETMINIMUMDIFFERENCE_H
#define BREADTHFIRSTSEARCH_L530_GETMINIMUMDIFFERENCE_H

#include "util.h"

class L530_getMinimumDifference : public LeetcodeBreadthFirstSearch {
private:
    int getMinimumDifference(TreeNode* root);
    void dfs(TreeNode* root, int& pre, int& ans);
public:
    L530_getMinimumDifference() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L530_GETMINIMUMDIFFERENCE_H
