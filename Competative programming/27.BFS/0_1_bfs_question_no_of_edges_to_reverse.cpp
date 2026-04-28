// https://discuss.codechef.com/t/reverse-editorial/6725

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 10;
const int INF = 1e9 + 10;
vector<vector<pair<int, int>>> graph(N);
// vector<int> vist(N,0);  replaced by level logic : level can't go back
vector<int> level(N, INF);
int bfs_shortest_path(int sr, int des) {
  deque<int> q;
  int curr_n = sr;
  q.push_back(curr_n);
  level[curr_n] = 0;
  while (!q.empty()) {
    curr_n = q.front();
    q.pop_front();
    for (auto p : graph[curr_n]) {
      if (level[curr_n] + p.second < level[p.first]) {
        level[p.first] = level[curr_n] + p.second;
        if (p.second == 0) { // path existed
          q.push_back(p.first);
        } else if (p.second == 1) { // path not existed
          q.push_front(p.first);
        }
      }
    }
  }
  return level[des]==INF?-1:level[des];
}

int main(int argn, char *argv[]) {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int v1, v2;
    cin >> v1 >> v2;
    if(v1==v2) continue; // avoid self-loops
    graph[v1].push_back({v2, 0});
    graph[v2].push_back({v1, 1});
  }
  cout << bfs_shortest_path(1, n) << endl;
  return 0;
}
