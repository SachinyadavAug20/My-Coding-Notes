#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  bool carPooling(vector<vector<int>> &trips, int capacity) {
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
        minQ; // from: to: numPass
    for (auto v : trips)
      minQ.push({v[1], v[2], v[0]});
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
        leaving; // to: numPass

    int dis = minQ.top()[0];
    int sz = 0;
    while (minQ.size()) {
      while (leaving.size() && leaving.top()[0] <= dis) {
        sz-= leaving.top()[1];
        leaving.pop();
      }
      while(minQ.size() && minQ.top()[0] == dis) {
        sz += minQ.top()[2];
        leaving.push({minQ.top()[1], minQ.top()[2]});
        minQ.pop();
      }
      if (sz > capacity) return false;
      if(minQ.size()) dis=minQ.top()[0];
    }
    return true;
  }
};
