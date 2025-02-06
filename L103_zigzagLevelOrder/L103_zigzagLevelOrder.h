//
// Created by garen_lee on 2025/2/6.
/**
  ******************************************************************************
  * @file           : L103_zigzagLevelOrder.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/6
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L103_ZIGZAGLEVELORDER_H
#define BREADTHFIRSTSEARCH_L103_ZIGZAGLEVELORDER_H

#include "util.h"
class L103_zigzagLevelOrder : public LeetcodeBreadthFirstSearch{
private:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root);
public:
    L103_zigzagLevelOrder(){}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L103_ZIGZAGLEVELORDER_H
