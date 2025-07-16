//
// Created by garen_lee on 2025/7/16.
/**
  ******************************************************************************
  * @file           : L662_widthOfBinaryTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/16
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L662_WIDTHOFBINARYTREE_H
#define BREADTHFIRSTSEARCH_L662_WIDTHOFBINARYTREE_H

#include "util.h"
class L662_widthOfBinaryTree : public LeetcodeBreadthFirstSearch {
private:
    int widthOfBinaryTree(TreeNode* root);
public:
    L662_widthOfBinaryTree() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L662_WIDTHOFBINARYTREE_H
