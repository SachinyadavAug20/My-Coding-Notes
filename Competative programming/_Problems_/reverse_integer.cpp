#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <string>
using namespace std;

class SolutionMe {
public:
  int reverse(int x) {
    string s = to_string(abs(1LL * x));
    std::reverse(s.begin(), s.end());
    long long ans = x >= 0 ? stoll(s) : -1 * stoll(s);
    if (ans < INT_MIN || ans > INT_MAX)
      return 0;
    return ans;
  }
};

class Solution {
public:
  int reverse(int x) {
    int rev = 0;
    while (x != 0) {
      int pop = x % 10;
      x /= 10;
      if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
        return 0;
      if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
        return 0;
      rev = rev * 10 + pop;
    }
    return rev;
  }
};
