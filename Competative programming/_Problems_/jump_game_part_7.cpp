#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define ll long long

class Solution {
public:
  // plan
  // BFS -> can jump and have many position(all 0) and all this
  // use queue, farthest index reachable
  bool canReach(string s, int minJump, int maxJump) {
    queue<int> q;
    int farthest = 0;
    q.push(0);
    while (!q.empty()) {
      int i = q.front();
      q.pop();
      int start = max(i + minJump, farthest + 1);
      for (int j = start; j < min((int)s.size(), i + maxJump + 1); j++) {
        if (s[j] == '0') {
          q.push(j);
          if (j == s.size() - 1) return true;
        }
      }
      farthest = i + maxJump;
    }
    return false;
  }
};
