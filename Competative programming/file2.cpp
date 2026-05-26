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
  int n;
  cin >> n;
  int ctn = 0;
  for (int i = 0; i < n; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x + y + z >= 2)
      ctn++;
  }
  cout << ctn;
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
  int carFleet(int target, vector<int> &position, vector<int> &speed) {
    // make array of pair of --> position : speed
    // sort it and travel from distant to closer
    // and compare if collide and for fleet
    int n = position.size();
    stack<pair<int, int>> st;
    vector<pair<int, int>> pos_speed;
    for (int i = 0; i < n; i++) {
      pos_speed.push_back({position[i], speed[i]});
    }
    sort(pos_speed.begin(), pos_speed.end());
    for (int i = n - 1; i >=0; i--) {
      auto p = pos_speed[i];
      float time = 1.0 * (target - p.first) / p.second;
      if(!st.empty() &&
             (1.0 * (target - st.top().first) / st.top().second) >= time) {
          continue;
      }
          st.push(pos_speed[i]);
    }

    return st.size();
  }
};
