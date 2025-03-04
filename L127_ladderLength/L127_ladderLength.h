//
// Created by garen_lee on 2025/3/4.
/**
  ******************************************************************************
  * @file           : L127_ladderLength.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/4
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L127_LADDERLENGTH_H
#define BREADTHFIRSTSEARCH_L127_LADDERLENGTH_H

#include "util.h"
class L127_ladderLength : public LeetcodeBreadthFirstSearch {
private:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList);
public:
    L127_ladderLength() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L127_LADDERLENGTH_H
