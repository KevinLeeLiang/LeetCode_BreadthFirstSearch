//
// Created by garen_lee on 2025/4/23.
/**
  ******************************************************************************
  * @file           : L365_canMeasureWater.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/23
  ******************************************************************************
  */
//

#include "L365_canMeasureWater.h"

bool L365_canMeasureWater::canMeasureWater(int x, int y, int target) {
    stack<PII>stk;
    stk.emplace(0, 0);
    auto hash_function = [](const PII& o) {
        return std::hash<int>()(o.first) ^ (std::hash<int>()(o.second) << 1);
    };
    unordered_set<PII, decltype(hash_function)> seen(0, hash_function);
    while (!stk.empty()) {
        if (seen.count(stk.top())) {
            stk.pop();
            continue;
        }
        seen.emplace(stk.top());

        auto [remain_x, remain_y] = stk.top();
        stk.pop();
        if (remain_x == target || remain_y == target || remain_x + remain_y == target) {
            return true;
        }
        // 把 X 壶灌满。
        stk.emplace(x, remain_y);
        // 把 Y 壶灌满。
        stk.emplace(remain_x, y);
        // 把 X 壶倒空。
        stk.emplace(0, remain_y);
        // 把 Y 壶倒空。
        stk.emplace(remain_x, 0);
        // 把 X 壶的水灌进 Y 壶，直至灌满或倒空。
        stk.emplace(remain_x - min(remain_x, y - remain_y), remain_y + min(remain_x, y - remain_y));
        // 把 Y 壶的水灌进 X 壶，直至灌满或倒空。
        stk.emplace(remain_x + min(remain_y, x - remain_x), remain_y - min(remain_y, x - remain_x));
    }
    return false;
}

void L365_canMeasureWater::test() {
    int x = 3, y = 5, target = 4;
    cout << canMeasureWater(x, y, target) << endl;
    x = 2, y = 6, target = 5;
    cout << canMeasureWater(x, y, target) << endl;
    x = 1, y = 2, target = 3;
    cout << canMeasureWater(x, y, target) << endl;
}