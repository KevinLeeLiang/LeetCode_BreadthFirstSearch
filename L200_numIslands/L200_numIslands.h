//
// Created by garen_lee on 2025/3/18.
/**
  ******************************************************************************
  * @file           : L200_numIslands.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/18
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L200_NUMISLANDS_H
#define BREADTHFIRSTSEARCH_L200_NUMISLANDS_H

#include "util.h"
class L200_numIslands : public LeetcodeBreadthFirstSearch {
private:
    int numIslands(vector<vector<char>>& grid);
public:
    L200_numIslands() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L200_NUMISLANDS_H
