// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// challenge is O(1) space as can be done easily by hash map(like in 2sum-part
// 1)

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    // use to pointer as sorted numbers
    int n = numbers.size();
    for (int i = 0, j = n - 1; i < j; i++) {
      int inum = numbers[i];
      int jnum = numbers[j];
      if (inum + jnum == target) {
        return {i + 1, j + 1};
      }
      if (inum + jnum > target) {
        j--; // as only way to decrease sum
        i--; // as changing i in loop will increse sum revere that increment
             // here
      }
    }
    return {-1, -1};
  }
};
