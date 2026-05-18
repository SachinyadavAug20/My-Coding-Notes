// https://leetcode.com/problems/first-missing-positive/description/
// hard buz need O(1) space and O(n) time solution

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution_WRONG {
public:
  int firstMissingPositive(vector<int> &nums) {
    unordered_multiset<int> hsh;
    for (int i : nums) {
      hsh.insert(i);
    }
    int i = 1;
    while (true) {
      if (hsh.find(i) == hsh.end()) {
        return i;
      }
      i++;
    }
  } // O(N) time but O(N) space(thus wrong)
  // also can do O(nlogn) time and O(1) space by sort
};

//  logical observation :-
//  ans belong (1,n+1)
//  use input array as hash -->
//         if all values positive traverse array if find like 3 make the (3-1)th
//         index be negative -> to make it is present in array but input array
//         has negative numbers
//          if get -ve number(not integer ) make it 0 -> to make exist make -ve
//          of that num which existes so, Now input array is a hash if -ve value
//          than it existes

class Solution {
public:
  int firstMissingPositive(vector<int> &nums) {
    int n = nums.size();
    if (n == 0) {
      return 0;
    }
    for (int i = 0; i < n; i++) {
      if (nums[i] < 0) { // make -ve to 0
        nums[i] = 0;
      }
    }

    for (int i = 0; i < n; i++) {
      int num = abs(nums[i]);
      if (num <= n && num != 0) {
        if (nums[num - 1] < 0)
          continue;
        if (nums[num - 1] == 0) {
          nums[num - 1] = -1 * num;
          continue;
        }
        nums[num - 1] *= (-1);
      }
    }

    for (int i = 0; i < n; i++) {
      if (nums[i] < 0) {
        continue;
      }
      return i + 1;
    }
    return n + 1;
  }
};
