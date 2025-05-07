//
// Created by garen_lee on 2025/5/7.
/**
  ******************************************************************************
  * @file           : L417_pacificAtlantic.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/7
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L417_PACIFICATLANTIC_H
#define BREADTHFIRSTSEARCH_L417_PACIFICATLANTIC_H

#include "util.h"
class L417_pacificAtlantic : public LeetcodeBreadthFirstSearch {
private:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights);
    void dfs(std::vector<std::vector<int>>& matrix, std::vector<std::vector<bool>>& visited, int row, int col, int prevHeight);
public:
    L417_pacificAtlantic() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L417_PACIFICATLANTIC_H
