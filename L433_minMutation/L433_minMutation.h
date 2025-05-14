//
// Created by garen_lee on 2025/5/14.
/**
  ******************************************************************************
  * @file           : L433_minMutation.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/14
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L433_MINMUTATION_H
#define BREADTHFIRSTSEARCH_L433_MINMUTATION_H

#include "util.h"
class L433_minMutation : public LeetcodeBreadthFirstSearch {
private:
    int minMutation(string startGene, string endGene, vector<string>& bank);
public:
    L433_minMutation() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L433_MINMUTATION_H
