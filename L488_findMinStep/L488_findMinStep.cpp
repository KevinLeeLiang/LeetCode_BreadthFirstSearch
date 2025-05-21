//
// Created by garen_lee on 2025/5/21.
/**
  ******************************************************************************
  * @file           : L488_findMinStep.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/21
  ******************************************************************************
  */
//

#include "L488_findMinStep.h"
string L488_findMinStep::clean(const string & s) {
    string res;
    vector<pair<char, int>> st;

    for (auto c : s) {
        while (!st.empty() && c != st.back().first && st.back().second >= 3) {
            st.pop_back();
        }
        if (st.empty() || c != st.back().first) {
            st.push_back({c,1});
        } else {
            st.back().second++;
        }
    }
    if (!st.empty() && st.back().second >= 3) {
        st.pop_back();
    }
    for (int i = 0; i < st.size(); ++i) {
        for (int j = 0; j < st[i].second; ++j) {
            res.push_back(st[i].first);
        }
    }
    return res;
}
int L488_findMinStep::findMinStep(string board, string hand) {
    unordered_set<string> visited;
    sort(hand.begin(), hand.end());

    visited.insert(board + " " + hand);
    queue<State> qu;
    qu.push(State(board, hand, 0));
    while (!qu.empty()) {
        State curr = qu.front();
        qu.pop();

        for (int j = 0; j < curr.hand.size(); ++j) {
            // 第 1 个剪枝条件: 当前选择的球的颜色和前一个球的颜色相同
            if (j > 0 && curr.hand[j] == curr.hand[j - 1]) {
                continue;
            }
            for (int i = 0; i <= curr.board.size(); ++i) {
                // 第 2 个剪枝条件: 只在连续相同颜色的球的开头位置插入新球
                if (i > 0 && curr.board[i - 1] == curr.hand[j]) {
                    continue;
                }

                // 第 3 个剪枝条件: 只在以下两种情况放置新球
                bool choose = false;
                //   第 1 种情况 : 当前球颜色与后面的球的颜色相同
                if (i < curr.board.size() && curr.board[i] == curr.hand[j]) {
                    choose = true;
                }
                //   第 2 种情况 : 当前后颜色相同且与当前颜色不同时候放置球
                if (i > 0 && i < curr.board.size() && curr.board[i - 1] == curr.board[i] && curr.board[i] != curr.hand[j]){
                    choose = true;
                }
                if (choose) {
                    string new_board = clean(curr.board.substr(0, i) + curr.hand[j] + curr.board.substr(i));
                    string new_hand = curr.hand.substr(0, j) + curr.hand.substr(j + 1);
                    if (new_board.size() == 0) {
                        return curr.step + 1;
                    }
                    if (!visited.count(new_board + " " + new_hand)) {
                        qu.push(State(new_board, new_hand, curr.step + 1));
                        visited.insert(new_board + " " + new_hand);
                    }
                }
            }
        }
    }
    return -1;
}

void L488_findMinStep::test() {
    string board = "WRRBBW", hand = "RB";
    cout << findMinStep(board, hand) << endl;
    board = "WWRRBBWW", hand = "WRBRW";
    cout << findMinStep(board, hand) << endl;
    board = "G", hand = "GGGGG";
    cout << findMinStep(board, hand) << endl;
    board = "RBYYBBRRB", hand = "YRBGB";
    cout << findMinStep(board, hand) << endl;
}