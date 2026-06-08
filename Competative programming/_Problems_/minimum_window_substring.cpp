// https://leetcode.com/problems/minimum-window-substring/submissions/2026671888/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // .count give 0 or 1 check contains
  string minWindow(string s, string t) {
    unordered_map<char, int> need;
    unordered_map<char, int> window;
    for (char ch : t) {
      need[ch]++;
    }
    int have = 0;
    int required = need.size();
    int l = 0;
    int minLen = INT_MAX;
    int start = 0;

    for (int r = 0; r < s.size(); r++) {
      char ch = s[r];
      window[ch]++;
      if (need.count(ch) && window[ch] == need[ch]) {
        have++;
      }
      while (have == required) {
        if (r - l + 1 < minLen) {
          minLen = r - l + 1;
          start = l;
        }
        char leftChar = s[l];
        window[leftChar]--;
        if (need.count(leftChar) && window[leftChar] < need[leftChar]) {
          have--;
        }
        l++;
      }
    }

    return minLen == INT_MAX ? "" : s.substr(start, minLen);
  }
};

