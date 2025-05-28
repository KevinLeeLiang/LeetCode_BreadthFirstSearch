//
// Created by garen_lee on 2025/5/28.
/**
  ******************************************************************************
  * @file           : L514_findRotateSteps.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/28
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L514_FINDROTATESTEPS_H
#define BREADTHFIRSTSEARCH_L514_FINDROTATESTEPS_H

#include "util.h"
class L514_findRotateSteps : public LeetcodeBreadthFirstSearch {
private:
    int findRotateSteps(string ring, string key);
public:
    L514_findRotateSteps() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L514_FINDROTATESTEPS_H
