//
// Created by garen_lee on 2025/3/4.
/**
  ******************************************************************************
  * @file           : L127_ladderLength.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/4
  ******************************************************************************
  */
//

#include "L127_ladderLength.h"

int L127_ladderLength::ladderLength(string beginWord, string endWord, vector<string> &wordList) {
    unordered_set<string> word_set(wordList.begin(), wordList.end());
    if (word_set.find(endWord) == word_set.end()) {
        return 0;
    }
    queue<string> q;
    q.push(beginWord);
    int depth = 1;
    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            string word = q.front();
            q.pop();
            for (int i = 0; i < word.size(); i++) {
                char origin_char = word[i];
                for (char c = 'a'; c <= 'z'; c++) {
                    word[i] = c;
                    if (word == endWord) {
                        return depth + 1;
                    } else if (word_set.find(word) != word_set.end()) {
                        q.push(word);
                        word_set.erase(word);
                    }
                    word[i] = origin_char;
                }
            }
        }
        depth++;
    }
    return 0;
}

void L127_ladderLength::test() {
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
    cout << ladderLength(beginWord, endWord, wordList) << endl;
    beginWord = "hit";
    endWord = "cog";
    wordList = {"hot", "dot", "dog", "lot", "log"};
    cout << ladderLength(beginWord, endWord, wordList) << endl;
}