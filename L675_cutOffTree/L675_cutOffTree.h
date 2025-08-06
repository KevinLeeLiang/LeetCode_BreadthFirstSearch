//
// Created by garen_lee on 2025/8/6.
/**
  ******************************************************************************
  * @file           : L675_cutOffTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/6
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L675_CUTOFFTREE_H
#define BREADTHFIRSTSEARCH_L675_CUTOFFTREE_H

#include "util.h"
class L675_cutOffTree : public LeetcodeBreadthFirstSearch {
private:
    int dir[4][2] = {{-1,0}, {1,0},{0,-1},{0,1}};
    int bfs(vector<vector<int>>&forest, int sx, int sy, int tx, int ty);
    int cutOffTree(vector<vector<int>>& forest);
public:
    L675_cutOffTree() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L675_CUTOFFTREE_H
