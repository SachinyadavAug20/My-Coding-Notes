#include <bits/stdc++.h>
#include <set>
using namespace std;
#define ll long long

class Solution {
public:
  // plan
  // take smaller triplets to form a target
  //
  bool mergeTriplets(vector<vector<int>> &triplets, vector<int> &target) {
    set<int> matches;
    for (auto triplet : triplets) {
      if ((triplet[0] > target[0] || triplet[1] > target[1]) ||
          triplet[2] > target[2])
        continue;
      if (triplet[0] == target[0])
        matches.insert(0);
      if (triplet[1] == target[1])
        matches.insert(1);
      if (triplet[2] == target[2])
        matches.insert(2);
    }
    if (matches.size() == 3)
      return true;
    return false;
  }
};
