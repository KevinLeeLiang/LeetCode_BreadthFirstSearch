//
// Created by garen_lee on 2025/5/14.
/**
  ******************************************************************************
  * @file           : L433_minMutation.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/14
  ******************************************************************************
  */
//

#include "L433_minMutation.h"

int L433_minMutation::minMutation(string startGene, string endGene, vector<string>& bank) {
    unordered_set<string> bank_set;
    for (auto &s: bank) {
        bank_set.insert(s);
    }
    if (bank_set.find(endGene) == bank_set.end()) {
        return -1;
    }
    queue<pair<string, int>>q;
    q.push({startGene, 0});
    char genes[] = {'A', 'C', 'G', 'T'};
    while (!q.empty()) {
        auto [cur, steps] = q.front();
        q.pop();
        if (cur == endGene) {
            return steps;
        }
        for (int i = 0; i < cur.size(); ++i) {
            char origin = cur[i];
            for (char &gene: genes) {
                cur[i] = gene;
                if (cur == endGene) {
                    return steps + 1;
                }
                if (bank_set.find(cur) != bank_set.end()) {
                    q.push({cur, steps + 1});
                    bank_set.erase(cur);
                }
            }
            cur[i] = origin;
        }
    }
    return -1;
}

void L433_minMutation::test() {
    string start = "AACCGGTT";
    string end = "AACCGGTA";
    vector<string> bank = {"AACCGGTA"};
    cout << minMutation(start, end, bank) << endl;
    start = "AACCGGTT";
    end = "AAACGGTA";
    bank = {"AACCGGTA", "AACCGCTA", "AAACGGTA"};
    cout << minMutation(start, end, bank) << endl;
    start = "AAAAACCC";
    end = "AACCCCCC";
    bank = {"AAAACCCC", "AAACCCCC", "AACCCCCC"};
    cout << minMutation(start, end, bank) << endl;
}