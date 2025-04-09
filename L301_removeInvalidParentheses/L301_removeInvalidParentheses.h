//
// Created by garen_lee on 2025/4/9.
/**
  ******************************************************************************
  * @file           : L301_removeInvalidParentheses.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/9
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L301_REMOVEINVALIDPARENTHESES_H
#define BREADTHFIRSTSEARCH_L301_REMOVEINVALIDPARENTHESES_H

#include "util.h"
class L301_removeInvalidParentheses : public LeetcodeBreadthFirstSearch {
private:
    vector<string> removeInvalidParentheses(string s);
    bool isValid(string str);
public:
    L301_removeInvalidParentheses() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L301_REMOVEINVALIDPARENTHESES_H
