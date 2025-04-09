//
// Created by garen_lee on 2025/4/9.
/**
  ******************************************************************************
  * @file           : L310_findMinHeightTrees.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/9
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L310_FINDMINHEIGHTTREES_H
#define BREADTHFIRSTSEARCH_L310_FINDMINHEIGHTTREES_H

#include "util.h"
class L310_findMinHeightTrees : public LeetcodeBreadthFirstSearch {
private:
    int findLongestNode(int u, vector<int> & parent, vector<vector<int>>& adj);
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges);
public:
    L310_findMinHeightTrees() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L310_FINDMINHEIGHTTREES_H
