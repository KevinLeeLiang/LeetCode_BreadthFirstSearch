//
// Created by garen_lee on 2025/5/21.
/**
  ******************************************************************************
  * @file           : L488_findMinStep.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/21
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L488_FINDMINSTEP_H
#define BREADTHFIRSTSEARCH_L488_FINDMINSTEP_H

#include "util.h"

class L488_findMinStep : public LeetcodeBreadthFirstSearch {
private:
    struct State {
        string board;
        string hand;
        int step;
        State(const string & board, const string & hand, int step) {
            this->board = board;
            this->hand = hand;
            this->step = step;
        }
    };
private:
    int findMinStep(string board, string hand);
    string clean(const string & s);
public:
    L488_findMinStep() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L488_FINDMINSTEP_H
