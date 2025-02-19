//
// Created by garen-lee on 2025/2/19.
/**
  ******************************************************************************
  * @file           : L111_minDepth.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/19
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L111_MINDEPTH_H
#define BREADTHFIRSTSEARCH_L111_MINDEPTH_H

#include "util.h"
class L111_minDepth : public LeetcodeBreadthFirstSearch{
private:
    int minDepth(TreeNode *root);
public:
    L111_minDepth(){}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L111_MINDEPTH_H
