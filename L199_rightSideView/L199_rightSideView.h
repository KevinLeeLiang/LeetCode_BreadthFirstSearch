//
// Created by garen_lee on 2025/3/11.
/**
  ******************************************************************************
  * @file           : L199_rightSideView.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/11
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L199_RIGHTSIDEVIEW_H
#define BREADTHFIRSTSEARCH_L199_RIGHTSIDEVIEW_H

#include "util.h"
class L199_rightSideView : public LeetcodeBreadthFirstSearch {
private:
    vector<int> rightSideView(TreeNode* root);
public:
    L199_rightSideView() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L199_RIGHTSIDEVIEW_H
