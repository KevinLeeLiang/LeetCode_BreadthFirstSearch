//
// Created by garen_lee on 2025/4/23.
/**
  ******************************************************************************
  * @file           : L399_calcEquation.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/23
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L399_CALCEQUATION_H
#define BREADTHFIRSTSEARCH_L399_CALCEQUATION_H

#include "util.h"
class L399_calcEquation : public LeetcodeBreadthFirstSearch {
private:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries);
public:
    L399_calcEquation() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L399_CALCEQUATION_H
