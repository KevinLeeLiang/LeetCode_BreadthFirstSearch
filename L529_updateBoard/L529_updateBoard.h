//
// Created by garen_lee on 2025/6/4.
/**
  ******************************************************************************
  * @file           : L529_updateBoard.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/4
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L529_UPDATEBOARD_H
#define BREADTHFIRSTSEARCH_L529_UPDATEBOARD_H

#include "util.h"
class L529_updateBoard : public LeetcodeBreadthFirstSearch {
private:
    int dir_x[8] = {0, 1, 0, -1, 1, 1, -1, -1};
    int dir_y[8] = {1, 0, -1, 0, 1, -1, 1, -1};
    void bfs(vector<vector<char>>& board, int sx, int sy);
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click);
public:
    L529_updateBoard() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L529_UPDATEBOARD_H
