// https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/2021354436/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
// merging array will be O(m+n) so, not possible
// as need Solution in O(log(m+n))
// for it must use binary search
// median -> middle value(if 2 middle then, average of it)
// divide
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    vector<int> &A = nums1;
    vector<int> &B = nums2;
    if (A.size() > B.size()) swap(A, B);
    // now A is samll and B is big
    int n = A.size();
    int m = B.size();
    int total = n + m;
    int half = (total + 1) / 2; // round up
    int l = 0;
    int r = n - 1;
    while (l <= r) {
      int cutA = l + (r - l) / 2;
      int cutB = half - cutA;
      int Aleft = (cutA == 0) ? INT_MIN : A[cutA - 1];
      int Aright = (cutA == n) ? INT_MAX : A[cutA];
      int Bleft = (cutB == 0) ? INT_MIN : B[cutB - 1];
      int Bright = (cutB == m) ? INT_MAX : B[cutB];
      if (Aleft <= Bright && Bleft <= Aright) {
        if (total % 2) {
          return max(Aleft, Bleft);
        }
        return (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0;
      }
      if (Aleft > Bright) {
        r = cutA - 1;
      } else {
        l = cutA + 1;
      }
    }
    return 0.0;
  }
};

