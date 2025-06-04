//
// Created by garen_lee on 2025/6/4.
/**
  ******************************************************************************
  * @file           : L515_largestValues.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/4
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L515_LARGESTVALUES_H
#define BREADTHFIRSTSEARCH_L515_LARGESTVALUES_H

#include "util.h"
class L515_largestValues : public LeetcodeBreadthFirstSearch {
private:
    vector<int> largestValues(TreeNode *root);
public:
    L515_largestValues() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L515_LARGESTVALUES_H
