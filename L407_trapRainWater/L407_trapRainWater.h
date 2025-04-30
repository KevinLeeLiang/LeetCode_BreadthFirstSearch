//
// Created by garen-lee on 2025/4/30.
/**
  ******************************************************************************
  * @file           : L407_trapRainWater.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/30
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L407_TRAPRAINWATER_H
#define BREADTHFIRSTSEARCH_L407_TRAPRAINWATER_H

#include "util.h"
class L407_trapRainWater : public LeetcodeBreadthFirstSearch {
private:
    int trapRainWater(vector<vector<int>>& heightMap);
public:
    L407_trapRainWater() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L407_TRAPRAINWATER_H
