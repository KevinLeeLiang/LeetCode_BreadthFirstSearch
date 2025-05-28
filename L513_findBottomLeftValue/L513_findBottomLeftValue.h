//
// Created by garen_lee on 2025/5/28.
/**
  ******************************************************************************
  * @file           : L513_findBottomLeftValue.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/28
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L513_FINDBOTTOMLEFTVALUE_H
#define BREADTHFIRSTSEARCH_L513_FINDBOTTOMLEFTVALUE_H

#include "util.h"
class L513_findBottomLeftValue : public LeetcodeBreadthFirstSearch {
private:
    int findBottomLeftValue(TreeNode* root);
public:
    L513_findBottomLeftValue() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L513_FINDBOTTOMLEFTVALUE_H
