//
// Created by garen_lee on 2025/7/9.
/**
  ******************************************************************************
  * @file           : L655_printTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/9
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L655_PRINTTREE_H
#define BREADTHFIRSTSEARCH_L655_PRINTTREE_H

#include "util.h"
class L655_printTree : public LeetcodeBreadthFirstSearch {
private:
    vector<vector<string>> printTree(TreeNode *root);
    void dfs(vector<vector<string>> &res, TreeNode *root, int r, int c, const int& layer);
public:
    L655_printTree() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L655_PRINTTREE_H
