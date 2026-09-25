#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

class Solution {
private:
  vector<int> prefixSums;
  int totalSum;
  mt19937 gen;

public:
  Solution(vector<int> &w) {
    totalSum = 0;
    for (int weight : w) {
      totalSum += weight;
      prefixSums.push_back(totalSum);
    }
  }

  int pickIndex() {
    uniform_int_distribution<> dis(1, totalSum);
    int target = dis(gen);
    auto it = lower_bound(prefixSums.begin(), prefixSums.end(), target);
    return distance(prefixSums.begin(), it);
  }
};
