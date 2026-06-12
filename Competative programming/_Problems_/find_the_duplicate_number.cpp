// https://leetcode.com/problems/find-the-duplicate-number/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionBAD {
public:
  // problem is O(1) space is need
  // logical make a hsh of 1e5 element every time is O(1) Solution

  int findDuplicate(vector<int> &nums) {
    const int N = 1e5 + 10;
    vector<int> hsh(N, 0);
    for (int i : nums) {
      hsh[i]++;
      if (hsh[i] >= 2) {
        return i;
      }
    }
    return -1;
  }
};
class Solution {
public:
  // this is a tough to come up with Solution
  // Floyed algorithum -> slow,fast
  // n+1 element 1,n values -> thus atleast 1 Duplicate
  // can't modify so can't sort
  //
  // it is linked list cycle problem -> use to find Floyed
  // to find cycle using
  // think every value as a pointer in range [1,n]
  // and value at pointer is nums[i] -> there will be cycle
  // none of them will point to 0th position as values are [1,n]
  // 0 will not be a part of cycle find
  // find begining of cycle is answer
  //
  // in Floyed algo
  // slow pointer and fast pointer
  // 1st intersection of slow and first pointer gives element which is at
  // intersection back to form a cycle(cycle confirm) to find begining of cycle
  // but get end by intersection at end put slow1 and remove fast pointer make
  // new slow pointer at begining and move pointer when this 2 slow pointer
  // collides it give begining work: because 0th and end of cycle are at equal
  // distance from begining

  int findDuplicate(vector<int> &nums) {
    int fast = 0, slow = 0;
    do {
      // move
      slow = nums[slow];
      fast = nums[nums[fast]];
    } while (slow != fast);
    int slow2 = 0;
    do {
      // move
      slow = nums[slow];
      slow2 = nums[slow2];
      if (slow == slow2)
        break;
    } while (slow != slow2);
    return slow;
  }
};

