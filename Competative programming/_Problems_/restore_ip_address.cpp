#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

class Solution {
public:
  vector<string> restoreIpAddresses(string s) {
    vector<string> result;
    string currentPath = "";
    backtrack(s, 0, 0, currentPath, result);
    return result;
  }

private:
  void backtrack(const string &s, int start, int section, string currentPath,
                 vector<string> &result) {
    if (section == 4) {
      if (start == s.length()) {
        currentPath.pop_back();
        result.push_back(currentPath);
      }
      return;
    }

    int remainingChars = s.length() - start;
    int remainingSections = 4 - section;
    if (remainingChars < remainingSections ||
        remainingChars > remainingSections * 3) {
      return;
    }

    for (int len = 1; len <= 3 && start + len <= s.length(); ++len) {
      string part = s.substr(start, len);

      if (isValid(part)) {
        backtrack(s, start + len, section + 1, currentPath + part + ".",
                  result);
      }
    }
  }

  bool isValid(const string &s) {
    if (s.length() > 1 && s[0] == '0')
      return false;

    int val = stoi(s);
    return val >= 0 && val <= 255;
  }
};
