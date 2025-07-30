//
// Created by garen_lee on 2025/7/30.
/**
  ******************************************************************************
  * @file           : L672_flipLights.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/30
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L672_FLIPLIGHTS_H
#define BREADTHFIRSTSEARCH_L672_FLIPLIGHTS_H

#include "util.h"
class L672_flipLights : public LeetcodeBreadthFirstSearch {
private:
    int flipLights(int n, int presses);
public:
    L672_flipLights() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L672_FLIPLIGHTS_H
