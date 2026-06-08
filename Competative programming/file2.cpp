#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}
void printVector(vector<int> a) {
  for (int n : a) {
    cout << n << " ";
  }
  cout << endl;
}

int main(int argn, char *argv[]) {
  int num;
  return 0;
}

void printVect(vector<unsigned> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first.first << "," << a[i].first.second << ") " << "("
         << a[i].second.first << "," << a[i].second.second << ") " << endl;
  }
}
void printVectSS(vector<pair<pair<int, int>, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first.first << " " << a[i].first.second << " > " << a[i].second
         << endl;
  }
}

void printprimefactors(vector<pair<int, int>> a) {
  for (auto pr : a) {
    cout << pr.first << "^" << pr.second << " ";
  }
  cout << endl;
}

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
