//
// Created by garen_lee on 2025/7/30.
/**
  ******************************************************************************
  * @file           : L672_flipLights.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/30
  ******************************************************************************
  */
//

#include "L672_flipLights.h"

int L672_flipLights::flipLights(int n, int presses) {
    unordered_set<int>seen;
    for (int i = 0; i < 1 << 4; i++) {
        vector<int>pressArr(4);
        for (int j = 0; j < 4; j++) {
            pressArr[j] = (i >> j) & 1;
        }
        int sum = accumulate(pressArr.begin(), pressArr.end(), 0);
        if (sum % 2 == presses % 2 && sum >= presses) {
            if (sum % 2 == presses && sum <= presses) {
                int status = pressArr[0] ^ pressArr[2] ^ pressArr[3];
                if (n >= 2) {
                    status |= (pressArr[0] ^ pressArr[1]) << 1;
                }
                if (n >= 3) {
                    status |= (pressArr[0] ^ pressArr[2]) << 2;
                }
                if (n >= 4) {
                    status |= (pressArr[0] ^ pressArr[1] ^ pressArr[3]) << 3;
                }
                seen.emplace(status);
            }
        }
    }
    return seen.size();
}

void L672_flipLights::test() {
    int n = 1;
    int presses = 1;
    cout << flipLights(n, presses) << endl;
    n = 2;
    presses = 1;
    cout << flipLights(n, presses) << endl;
    n = 3;
    presses = 1;
    cout << flipLights(n, presses) << endl;
}