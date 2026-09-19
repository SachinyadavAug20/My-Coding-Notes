#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair

class Solution {
public:
  int compress(vector<char> &chars) {
    int i = 0;
    int writeIdx = 0;

    while (i < chars.size()) {
      char currentChar = chars[i];
      int count = 0;
      while (i < chars.size() && chars[i] == currentChar) {
        i++;
        count++;
      }
      chars[writeIdx++] = currentChar;
      if (count > 1) {
        string countStr = to_string(count);
        for (char c : countStr) {
          chars[writeIdx++] = c;
        }
      }
    }
    return writeIdx;
  }
};
