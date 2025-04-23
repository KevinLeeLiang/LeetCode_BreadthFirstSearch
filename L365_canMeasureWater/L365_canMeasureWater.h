//
// Created by garen_lee on 2025/4/23.
/**
  ******************************************************************************
  * @file           : L365_canMeasureWater.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/23
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L365_CANMEASUREWATER_H
#define BREADTHFIRSTSEARCH_L365_CANMEASUREWATER_H

#include "util.h"
using PII = pair<int, int>;
class L365_canMeasureWater : public LeetcodeBreadthFirstSearch {
private:
    bool canMeasureWater(int x, int y, int target);
public:
    L365_canMeasureWater() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L365_CANMEASUREWATER_H
