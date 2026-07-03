#include <bits/stdc++.h>
#include <queue>
#include <unordered_set>
using namespace std;
#define ll long long

#define for0(i, n) for (int i = 0; i < n; i++)
class Solution {
public:
  // plan
  // bfs
  //
  string rotate(string s, int pos, int sign) { // 0 index pos
    string d = "";
    d += s[pos];
    int digit = stoi(d);
    if (sign == 1) {
      digit = (digit + 1) % 10;
    } else {
      digit = (digit + 10 - 1) % 10;
    }
    s[pos] = digit + '0';
    return s;
  }
  unordered_set<string> uos;
  void pushInQueue(queue<string> &q, string s, unordered_set<string> &v) {
    if (v.find(s) != v.end())
      return;
    if (uos.find(s) != uos.end())
      return;
    v.insert(s);
    q.push(s);
  }
  int openLock(vector<string> &deadends, string target) {
    queue<string> q;
    unordered_set<string> v;
    uos.clear();
    for0(i, deadends.size()) uos.insert(deadends[i]);
    if (uos.find("0000") != uos.end())
      return -1;
    q.push("0000");
    v.insert("0000");
    int step = 0;
    while (!q.empty()) {
      int s = q.size();
      while (s--) {
        string p = q.front();
        q.pop();
        if (target == p) {
          return step;
        }
        pushInQueue(q, rotate(p, 0, 1), v);
        pushInQueue(q, rotate(p, 1, 1), v);
        pushInQueue(q, rotate(p, 2, 1), v);
        pushInQueue(q, rotate(p, 3, 1), v);

        pushInQueue(q, rotate(p, 0, -1), v);
        pushInQueue(q, rotate(p, 1, -1), v);
        pushInQueue(q, rotate(p, 2, -1), v);
        pushInQueue(q, rotate(p, 3, -1), v);
      }
      step++;
    }
    return -1;
  }
};
