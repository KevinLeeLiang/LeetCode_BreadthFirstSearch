//
// Created by garen_lee on 2025/3/4.
/**
  ******************************************************************************
  * @file           : L126_findLadders.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/4
  ******************************************************************************
  */
//

#include "L126_findLadders.h"

void L126_findLadders::backtrack(vector<vector<string>> &res, const string &cur_word, unordered_map<string, set<string>> &from,
                                 vector<string> &path) {
    if (from[cur_word].empty()) {
        res.push_back(path);
        return;
    }
    for (auto preWord : from[cur_word]) {
        path.push_back(preWord);
        backtrack(res, preWord, from, path);
        path.pop_back();
   }
}

vector<vector<string>> L126_findLadders::findLadders(string beginWord, string endWord, vector<string>& wordList) {
    vector<vector<string>> res;
    unordered_set<string> dict = {wordList.begin(), wordList.end()};
    if (dict.find(endWord) == dict.end()) {
        return res;
    }
    dict.erase(beginWord);
    unordered_map<string, int>steps = {{beginWord, 0}};
    unordered_map<string, set<string>> from = {{beginWord, {}}};
    int step = 0;
    bool found = false;
    queue<string> q = queue<string>{{beginWord}};
    int wordLen = beginWord.length();

    while (!q.empty()) {
        step++;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            const string& cur_word = q.front();
            string next_word = cur_word;;
            q.pop();
            // 将每一位替换成 26 个小写英文字母
            for (int j = 0; j < wordLen; ++j) {
                const char origin = next_word[j];
                for (char c = 'a'; c <= 'z'; ++c) {
                    next_word[j] = c;
                    if (steps[next_word] == step) {
                        from[next_word].insert(cur_word);
                    }
                    if (dict.find(next_word) == dict.end()) {
                        continue;
                    }
                    // 如果从一个单词扩展出来的单词以前遍历过，距离一定更远，为了避免搜索到已经遍历到，且距离更远的单词，需要将它从 dict 中删除
                    dict.erase(next_word);
                    // 这一层扩展出的单词进入队列
                    q.push(next_word);
                    // 记录 nextWord 从 currWord 而来
                    from[next_word].insert(cur_word);
                    // 记录 nextWord 的 step
                    steps[next_word] = step;
                    if (next_word == endWord) {
                        found = true;
                    }
                }
                next_word[j] = origin;
            }
        }
        if (found) {
            break;
        }
    }
    if (found) {
        vector<string> path = {endWord};
        backtrack(res, endWord, from, path);
    }
    return res;
}

void L126_findLadders::test() {
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList = {"hot","dot","dog","lot","log","cog"};
    vector<vector<string>> result = findLadders(beginWord, endWord, wordList);
    print_vector_vector(result);
    beginWord = "hit";
    endWord = "cog";
    wordList = {"hot","dot","dog","lot","log"};
    result = findLadders(beginWord, endWord, wordList);
    print_vector_vector(result);
}