//
// Created by garen_lee on 2025/5/28.
/**
  ******************************************************************************
  * @file           : L514_findRotateSteps.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/28
  ******************************************************************************
  */
//

#include "L514_findRotateSteps.h"

int L514_findRotateSteps::findRotateSteps(string ring, string key) {
    int n = ring.size(), m = key.size();
    vector<int> pos[26];
    for (int i = 0; i < n; ++i) {
        pos[ring[i] - 'a'].push_back(i);
    }
    vector<vector<int>> dp(m, vector<int>(n, 0x3f3f3f3f));
    for (auto& i: pos[key[0] - 'a']) {
        dp[0][i] = min(i, n - i) + 1;
    }
    for (int i = 1; i < m; ++i) {
        for (auto& j: pos[key[i] - 'a']) {
            for (auto& k: pos[key[i - 1] - 'a']) {
                dp[i][j] = min(dp[i][j], dp[i - 1][k] + min(abs(j - k), n - abs(j - k)) + 1);
            }
        }
    }
    return *min_element(dp[m - 1].begin(), dp[m - 1].end());
}

void L514_findRotateSteps::test() {
    string ring = "godding", key = "gd";
    cout << findRotateSteps(ring, key) << endl;
    ring = "godding", key = "godding";
    cout << findRotateSteps(ring, key) << endl;
}