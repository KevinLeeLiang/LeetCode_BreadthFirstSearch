//
// Created by garen_lee on 2025/4/16.
/**
  ******************************************************************************
  * @file           : L322_coinChange.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/16
  ******************************************************************************
  */
//

#include "L322_coinChange.h"

int L322_coinChange::coinChange(vector<int> &coins, int amount) {
    int Max = amount + 1;
    vector<int> dp(amount + 1, Max);
    dp[0] = 0;
    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < coins.size(); j++) {
            if (coins[j] <= i) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

void L322_coinChange::test() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    cout << coinChange(coins, amount) << endl;
    coins = {2};
    amount = 3;
    cout << coinChange(coins, amount) << endl;
    coins = {1};
    amount = 0;
    cout << coinChange(coins, amount) << endl;
    coins = {186,419,83,408};
    amount = 6249;
    cout << coinChange(coins, amount) << endl;
}