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

const int N = 510, INF = 1e9 + 10;
ll dist[N][N];

int main(int argn, char *argv[]) {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> dist[i][j];
    }
  }
  vector<int> deletion_order(n);
  for (int i = 0; i < n; i++) {
    cin >> deletion_order[i];
  }
  reverse(deletion_order.begin(), deletion_order.end());
  vector<ll> ans;
  for (int k = 0; k < n; k++) {
    int k_v = deletion_order[k];
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        ll new_dist = dist[i][k_v] + dist[k_v][j];
        dist[i][j] = min(dist[i][j], new_dist);
      }
    }
    ll sum = 0;
    for (int i = 1; i <= k; i++) {
      for (int j = 1; j <= k; j++) {
        sum += dist[deletion_order[i]][deletion_order[j]];
      }
    }
    ans.push_back(sum);
  }
  reverse(ans.begin(), ans.end());
  for (ll a : ans) {
    // cout << a << " ";
  }
  cout << endl << INT_MAX << " " << INT_MIN << endl;
  return 0;
}
/*
 3 3
7 7 5
2 4 6
8 2 0
 */

/*
 https://codeforces.com/contest/776/problem/B
 https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/
https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/
https://leetcode.com/problems/pacific-atlantic-water-flow/description/
https://leetcode.com/problems/island-perimeter/description/
https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
      https://cp-algorithms.com/graph/depth-first-search.html
    https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
    https://www.geeksforgeeks.org/explore?page=1&sortBy=submissions&_gl=1*1fcocz3*_up*MQ..*_gs*MQ..
    https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?page=1&sortBy=submissions
https://leetcode.com/problems/number-of-islands/description/
 */

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
