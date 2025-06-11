//
// Created by garen_lee on 2025/6/11.
/**
  ******************************************************************************
  * @file           : L542_updateMatrix.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/11
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L542_UPDATEMATRIX_H
#define BREADTHFIRSTSEARCH_L542_UPDATEMATRIX_H

#include "util.h"
class L542_updateMatrix : public LeetcodeBreadthFirstSearch {
private:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat);
public:
    L542_updateMatrix() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L542_UPDATEMATRIX_H
