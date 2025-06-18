//
// Created by garen_lee on 2025/6/18.
/**
  ******************************************************************************
  * @file           : L559_maxDepth.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/18
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L559_MAXDEPTH_H
#define BREADTHFIRSTSEARCH_L559_MAXDEPTH_H

#include "util.h"

namespace L559 {
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
}
class L559_maxDepth : public LeetcodeBreadthFirstSearch {
    int maxDepth(L559::Node* root);
public:
    L559_maxDepth() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L559_MAXDEPTH_H
