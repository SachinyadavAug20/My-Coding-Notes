// https://leetcode.com/problems/valid-palindrome-ii/submissions/2007319865/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrom(string s, int l, int r, int rctn) {
  if (rctn > 1)
    return 0;
  int n = s.size(), ctn = 0;
  for (int i = l, j = r; i < j; i++, j--) {
    if (s[i] != s[j]) {
      rctn++;
      return (isPalindrom(s, i + 1, j, rctn) || isPalindrom(s, i, j - 1, rctn));
    }
  }
  return 1;
}
bool validPalindrome(string s) { return isPalindrom(s, 0, s.size() - 1, 0); }

int main(int argn, char *argv[]) {
  cout << validPalindrome("zaaxcvbnaaz");
  return 0;
}
