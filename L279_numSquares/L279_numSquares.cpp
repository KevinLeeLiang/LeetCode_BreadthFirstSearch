//
// Created by garen_lee on 2025/4/2.
/**
  ******************************************************************************
  * @file           : L279_numSquares.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/2
  ******************************************************************************
  */
//

#include "L279_numSquares.h"

int L279_numSquares::numSquares(int n) {
    std::vector<int>dp(n+1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j * j <= i; ++j) {
            dp[i] = std::min(dp[i], dp[i - j* j] + 1);
        }
    }
    return dp[n];
}

void L279_numSquares::test() {
    int n = 12;
    cout << numSquares(n) << endl;
    n = 13;
    cout << numSquares(n) << endl;
}