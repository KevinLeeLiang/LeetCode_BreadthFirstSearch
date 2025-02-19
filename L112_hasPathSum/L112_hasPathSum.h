//
// Created by garen-lee on 2025/2/19.
/**
  ******************************************************************************
  * @file           : L112_hasPathSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/19
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L112_HASPATHSUM_H
#define BREADTHFIRSTSEARCH_L112_HASPATHSUM_H

#include "util.h"
class L112_hasPathSum : public LeetcodeBreadthFirstSearch{
private:
    bool hasPathSum(TreeNode* root, int targetSum);
public:
    L112_hasPathSum() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L112_HASPATHSUM_H
