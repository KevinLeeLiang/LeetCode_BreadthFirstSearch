//
// Created by garen_lee on 2025/2/6.
/**
  ******************************************************************************
  * @file           : L102_levelOrder.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/6
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L102_LEVELORDER_H
#define BREADTHFIRSTSEARCH_L102_LEVELORDER_H

#include "util.h"
class L102_levelOrder : public LeetcodeBreadthFirstSearch{
private:
    vector<vector<int>> levelOrder(TreeNode* root);
public:
    L102_levelOrder(){}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L102_LEVELORDER_H
