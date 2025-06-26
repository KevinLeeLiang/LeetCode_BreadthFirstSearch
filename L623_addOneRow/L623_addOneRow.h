//
// Created by garen_lee on 2025/6/25.
/**
  ******************************************************************************
  * @file           : L623_addOneRow.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/25
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L623_ADDONEROW_H
#define BREADTHFIRSTSEARCH_L623_ADDONEROW_H

#include "util.h"
class L623_addOneRow : public LeetcodeBreadthFirstSearch {
private:
    TreeNode *addOneRow(TreeNode *root, int val, int depth);
public:
    L623_addOneRow() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L623_ADDONEROW_H
