// https://leetcode.com/problems/time-based-key-value-store/description/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class TimeMap {
public:
  // Redis related
  // key : Value<time,val>
  unordered_map<string, vector<pair<int, string>>> hsh;
  TimeMap() {}

  void set(string key, string value, int timestamp) {
    hsh[key].push_back({timestamp, value});
  } // O(1)

  string get(string key, int timestamp) {
    // auto v=hsh[key]; BAD as copy eiter vector O(n)
    // TLE :do binary search
    int lo = 0, hi = hsh[key].size() - 1;
    while (hi >= lo) {
      int mid = lo + (hi - lo) / 2;
      if (hsh[key][mid].first == timestamp)
        return hsh[key][mid].second;

      if (hsh[key][mid].first < timestamp) {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    }
    if ((lo >= 0 && lo < hsh[key].size()) && hsh[key][lo].first < timestamp)
      return hsh[key][lo].second;
    if ((hi >= 0 && hi < hsh[key].size()) && hsh[key][hi].first < timestamp)
      return hsh[key][hi].second;
    return "";
  } // O(logn)
};
