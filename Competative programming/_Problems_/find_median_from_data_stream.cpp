#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define ll long long

class MedianFinder_maintain_sorted_array {
public:
  // maintain sorted array method
  vector<int> sorted;
  MedianFinder_maintain_sorted_array() {}

  void addNum(int num) {
    int index = lower_bound(sorted.begin(), sorted.end(), num) - sorted.begin();
    sorted.insert(sorted.begin() + index, num);
  } // O(n)

  double findMedian() {
    if (sorted.size() % 2 == 0)
      return (sorted[sorted.size() / 2] + sorted[sorted.size() / 2 - 1]) / 2.0;
    return sorted[sorted.size() / 2];
  } // O(1)
}; // bad 5%

class MedianFinder {
public:
    priority_queue<int> left;   // Max heap
    priority_queue<int, vector<int>, greater<int>> right; // Min heap

    MedianFinder() {}

    void addNum(int num) {
        left.push(num);

        if (!right.empty() && left.top() > right.top()) {
            right.push(left.top());
            left.pop();
        }
        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        }
        else if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }
    }

    double findMedian() {
        if (left.size() > right.size())
            return left.top();
        return (left.top() + right.top()) / 2.0;
    }
};
