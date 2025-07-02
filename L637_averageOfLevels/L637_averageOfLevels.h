//
// Created by garen_lee on 2025/7/2.
/**
  ******************************************************************************
  * @file           : L637_averageOfLevels.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/2
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L637_AVERAGEOFLEVELS_H
#define BREADTHFIRSTSEARCH_L637_AVERAGEOFLEVELS_H

#include "util.h"
class L637_averageOfLevels : public LeetcodeBreadthFirstSearch {
private:
    vector<double> averageOfLevels(TreeNode *root);
public:
    L637_averageOfLevels() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L637_AVERAGEOFLEVELS_H
