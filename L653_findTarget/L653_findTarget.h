//
// Created by garen_lee on 2025/7/2.
/**
  ******************************************************************************
  * @file           : L653_findTarget.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/2
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L653_FINDTARGET_H
#define BREADTHFIRSTSEARCH_L653_FINDTARGET_H

#include "util.h"
class L653_findTarget : public LeetcodeBreadthFirstSearch {
private:
    bool findTarget(TreeNode *root, int k);
    bool dfs(TreeNode *root, int k);
    unordered_map<int, int> map;
public:
    L653_findTarget() {}
    void test ();
};


#endif //BREADTHFIRSTSEARCH_L653_FINDTARGET_H
