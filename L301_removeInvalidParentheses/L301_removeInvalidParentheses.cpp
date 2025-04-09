//
// Created by garen_lee on 2025/4/9.
/**
  ******************************************************************************
  * @file           : L301_removeInvalidParentheses.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/9
  ******************************************************************************
  */
//

#include "L301_removeInvalidParentheses.h"
bool L301_removeInvalidParentheses::isValid(string str) {
    int count = 0;

    for (char c : str) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }

    return count == 0;
}

vector<string> L301_removeInvalidParentheses::removeInvalidParentheses(string s) {
    vector<string> ans;
    unordered_set<string> currSet;

    currSet.insert(s);
    while (true) {
        for (auto & str : currSet) {
            if (isValid(str))
                ans.emplace_back(str);
        }
        if (ans.size() > 0) {
            return ans;
        }
        unordered_set<string> nextSet;
        for (auto & str : currSet) {
            for (int i = 0; i < str.size(); i++) {
                if (i > 0 && str[i] == str[i - 1]) {
                    continue;
                }
                if (str[i] == '(' || str[i] == ')') {
                    nextSet.insert(str.substr(0, i) + str.substr(i + 1, str.size()));
                }
            }
        }
        currSet = nextSet;
    }
}

void L301_removeInvalidParentheses::test() {
    string s = "()())()";
    vector<string> res = removeInvalidParentheses(s);
    print_vector(res);
    s = "(a)())()";
    res = removeInvalidParentheses(s);
    print_vector(res);
    s = ")(";
    res = removeInvalidParentheses(s);
    print_vector(res);
}