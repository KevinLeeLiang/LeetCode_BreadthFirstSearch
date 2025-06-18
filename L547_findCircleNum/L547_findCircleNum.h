//
// Created by garen_lee on 2025/6/18.
/**
  ******************************************************************************
  * @file           : L547_findCircleNum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/18
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L547_FINDCIRCLENUM_H
#define BREADTHFIRSTSEARCH_L547_FINDCIRCLENUM_H

#include "util.h"
class L547_findCircleNum : public LeetcodeBreadthFirstSearch {
private:
    int findCircleNum(vector<vector<int>>& isConnected);
public:
    L547_findCircleNum() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L547_FINDCIRCLENUM_H
