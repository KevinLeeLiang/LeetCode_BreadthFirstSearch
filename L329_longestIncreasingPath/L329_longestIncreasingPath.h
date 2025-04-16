//
// Created by garen_lee on 2025/4/16.
/**
  ******************************************************************************
  * @file           : L329_longestIncreasingPath.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/16
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L329_LONGESTINCREASINGPATH_H
#define BREADTHFIRSTSEARCH_L329_LONGESTINCREASINGPATH_H

#include "util.h"
class L329_longestIncreasingPath : public LeetcodeBreadthFirstSearch {
private:
    int dirs[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
    int rows ;
    int columns;
    int dfs(vector<vector<int>> &matrix, int row, int column, vector<vector<int>> &memo);
    int longestIncreasingPath(vector<vector<int>>& matrix);
public:
    L329_longestIncreasingPath() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L329_LONGESTINCREASINGPATH_H
