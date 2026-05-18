// https://leetcode.com/problems/valid-palindrome/
#include <bits/stdc++.h>
using namespace std;
#define ll long long


class Solution {
public:
    // remove_if shifts all unwanted to end and give iterator of new logical end -> thus erase from that end
    // it conserves the size of array
  bool isPalindrome(string s) {
    s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }),
            s.end());
    int n = s.size();
    if (n == 0) {
      return true;
    }
    transform(s.begin(), s.end(), s.begin(), [](char c) { return tolower(c); });
    cout << s << endl;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
      if (s[i] != s[j]) {
        return false;
      }
    }
    return true;
  }
};
