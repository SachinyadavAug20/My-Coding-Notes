#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  bool isNStraightHand(vector<int> &hand, int groupSize) {
    if (hand.size() % groupSize != 0)
      return false;
    unordered_map<int, int> hsh;
    for (int card : hand)
      hsh[card]++;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (auto &[card, freq] : hsh)
      minHeap.push(card);
    while (!minHeap.empty()) {
      int first = minHeap.top();
      for (int i = first; i < first + groupSize; i++) {
        if (!hsh.count(i))
          return false;
        hsh[i]--;
        if (hsh[i] == 0) {
          if (i != minHeap.top())
            return false;
          minHeap.pop();
        }
      }
    }
    return true;
  }
};
