//
// Created by garen-lee on 2025/1/30.
/**
  ******************************************************************************
  * @file           : L101_isSymmetric.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/30
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L101_ISSYMMETRIC_H
#define BREADTHFIRSTSEARCH_L101_ISSYMMETRIC_H
#include"util.h"

class L101_isSymmetric : public LeetcodeBreadthFirstSearch{
private:
    bool check(TreeNode* left, TreeNode* right);
    bool isSymmetric(TreeNode* root);
public:
    L101_isSymmetric(){}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L101_ISSYMMETRIC_H
