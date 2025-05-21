//
// Created by garen_lee on 2025/5/21.
/**
  ******************************************************************************
  * @file           : L463_islandPerimeter.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/21
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L463_ISLANDPERIMETER_H
#define BREADTHFIRSTSEARCH_L463_ISLANDPERIMETER_H

#include "util.h"
class L463_islandPerimeter : public LeetcodeBreadthFirstSearch {
private:
    constexpr static int dx[4] = {0, 1, 0, -1};
    constexpr static int dy[4] = {1, 0, -1, 0};
private:
    int islandPerimeter(vector<vector<int>>& grid);
    int dfs(int x, int y, vector<vector<int>>& grid, int n, int m);
public:
    L463_islandPerimeter() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L463_ISLANDPERIMETER_H
