//
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L107_levelOrderBottom.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/11
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L107_LEVELORDERBOTTOM_H
#define BREADTHFIRSTSEARCH_L107_LEVELORDERBOTTOM_H

#include "util.h"
class L107_levelOrderBottom : public LeetcodeBreadthFirstSearch{
private:
    vector<vector<int>> levelOrderBottom(TreeNode* root);
public:
    L107_levelOrderBottom(){}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L107_LEVELORDERBOTTOM_H
