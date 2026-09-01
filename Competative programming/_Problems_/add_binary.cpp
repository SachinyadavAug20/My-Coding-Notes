#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <queue>
using namespace std;
#define ll long long

class Solution {
public:
  int minimumEffortPath(vector<vector<int>> &heights) {
    int n = heights.size();
    int m = heights[0].size();

    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    dist[0][0] = 0;
    pq.push({0, {0, 0}});
    int dr[] = {0, 0, 1, -1};
    int dc[] = {1, -1, 0, 0};
    while (!pq.empty()) {
      int d = pq.top().first;
      int r = pq.top().second.first;
      int c = pq.top().second.second;
      pq.pop();
      if (r == n - 1 && c == m - 1)
        return d;
      if (d > dist[r][c])
        continue;
      for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
          int newEffort = max(d, abs(heights[r][c] - heights[nr][nc]));
          if (newEffort < dist[nr][nc]) {
            dist[nr][nc] = newEffort;
            pq.push({newEffort, {nr, nc}});
          }
        }
      }
    }
    return 0;
  }
};
