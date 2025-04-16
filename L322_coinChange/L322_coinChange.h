//
// Created by garen_lee on 2025/4/16.
/**
  ******************************************************************************
  * @file           : L322_coinChange.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/16
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L322_COINCHANGE_H
#define BREADTHFIRSTSEARCH_L322_COINCHANGE_H

#include "util.h"
class L322_coinChange : public LeetcodeBreadthFirstSearch {
private:
    int coinChange(vector<int>& coins, int amount);
public:
    L322_coinChange() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L322_COINCHANGE_H
