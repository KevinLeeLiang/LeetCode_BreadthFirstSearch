//
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L104_maxDepth.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/11
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L104_MAXDEPTH_H
#define BREADTHFIRSTSEARCH_L104_MAXDEPTH_H

#include "util.h"
class L104_maxDepth : public LeetcodeBreadthFirstSearch{
private:
    int maxDepth(TreeNode* root);
    int dfs(TreeNode* root);
    int bfs(TreeNode* root);
public:
    L104_maxDepth(){}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L104_MAXDEPTH_H
