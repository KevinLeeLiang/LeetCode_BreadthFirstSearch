//
// Created by garen_lee on 2025/2/25.
/**
  ******************************************************************************
  * @file           : L116_connect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/25
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L116_CONNECT_H
#define BREADTHFIRSTSEARCH_L116_CONNECT_H

#include "util.h"
class L116_connect : public LeetcodeBreadthFirstSearch{
private:
    Node* connect(Node* root);
public:
    L116_connect(){}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L116_CONNECT_H
