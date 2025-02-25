//
// Created by garen_lee on 2025/2/25.
/**
  ******************************************************************************
  * @file           : L117_connect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/25
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L117_CONNECT_H
#define BREADTHFIRSTSEARCH_L117_CONNECT_H

#include "util.h"
class L117_connect : public LeetcodeBreadthFirstSearch{
private:
    Node* connect(Node* root);
public:
    L117_connect() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L117_CONNECT_H
