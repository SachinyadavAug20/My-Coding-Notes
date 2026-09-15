#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  int totalFruit(vector<int> &fruits) {
    unordered_map<int, int> basket;
    int left = 0, maxFruits = 0;
    for (int right = 0; right < fruits.size(); ++right) {
      basket[fruits[right]]++;
      while (basket.size() > 2) {
        int leftFruit = fruits[left];
        basket[leftFruit]--;
        if (basket[leftFruit] == 0) {
          basket.erase(leftFruit);
        }
        left++;
      }
      maxFruits = max(maxFruits, right - left + 1);
    }
    return maxFruits;
  }
};
