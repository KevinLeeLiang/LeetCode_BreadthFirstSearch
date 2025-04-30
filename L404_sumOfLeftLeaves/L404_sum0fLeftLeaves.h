//
// Created by garen-lee on 2025/4/30.
/**
  ******************************************************************************
  * @file           : L404_sum0fLeftLeaves.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/30
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L404_SUM0FLEFTLEAVES_H
#define BREADTHFIRSTSEARCH_L404_SUM0FLEFTLEAVES_H

#include "util.h"
class L404_sum0fLeftLeaves : public LeetcodeBreadthFirstSearch {
private:
    int trapRainWater(vector<vector<int>>& heightMap);
    bool isLeafNode(TreeNode* node);
public:
    int sumOfLeftLeaves(TreeNode* root);
    void test();
};


#endif //BREADTHFIRSTSEARCH_L404_SUM0FLEFTLEAVES_H
