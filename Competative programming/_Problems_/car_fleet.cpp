// https://leetcode.com/problems/car-fleet/submissions/2013692091/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

