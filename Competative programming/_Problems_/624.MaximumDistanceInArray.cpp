// https://leetcode.com/problems/maximum-distance-in-arrays/description/
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long


int maxDistance(vector<vector<int>> &arrays) {
  int ans;
  int maxSofar = arrays[0][arrays[0].size() - 1], minSoFar = arrays[0][0],
      f = 0;

  for (int j = 1; j < arrays.size(); j++) {
    vector<int> arr = arrays[j];
    int i = arr.size() - 1;
    ans = max(ans, max(arr[i] - minSoFar, maxSofar - arr[0])); // avoid same array extremas
    maxSofar = max(maxSofar, arr[i]);
    minSoFar = min(minSoFar, arr[0]);
  }
  return ans;
}

