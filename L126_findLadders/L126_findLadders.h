//
// Created by garen_lee on 2025/3/4.
/**
  ******************************************************************************
  * @file           : L126_findLadders.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/4
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L126_FINDLADDERS_H
#define BREADTHFIRSTSEARCH_L126_FINDLADDERS_H

#include "util.h"
class L126_findLadders : public LeetcodeBreadthFirstSearch {
private:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList);
    void backtrack(vector<vector<string>> &res, const string &Node, unordered_map<string, set<string>> &from,
                   vector<string> &path);

public:
    L126_findLadders() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L126_FINDLADDERS_H
