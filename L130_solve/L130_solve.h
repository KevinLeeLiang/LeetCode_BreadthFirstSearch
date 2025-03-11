//
// Created by garen_lee on 2025/3/11.
/**
  ******************************************************************************
  * @file           : L130_solve.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/11
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L130_SOLVE_H
#define BREADTHFIRSTSEARCH_L130_SOLVE_H

#include "util.h"
class L130_solve : public LeetcodeBreadthFirstSearch {
private:
    void solve(vector<vector<char>>& board);
    void dfs(vector<vector<char>>&board, int i, int j);
public:
    L130_solve() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L130_SOLVE_H
