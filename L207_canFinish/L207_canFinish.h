//
// Created by garen_lee on 2025/3/18.
/**
  ******************************************************************************
  * @file           : L207_canFinish.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/18
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L207_CANFINISH_H
#define BREADTHFIRSTSEARCH_L207_CANFINISH_H

#include "util.h"
class L207_canFinish : public LeetcodeBreadthFirstSearch {
private:
    vector<vector<int>> edges;
    vector<int> indeg;
private:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites);
public:
    L207_canFinish() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L207_CANFINISH_H
