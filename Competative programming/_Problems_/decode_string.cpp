// https://leetcode.com/problems/decode-string/submissions/2014633559/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  string repeatNtimes(string s, int n) {
    string ans = "";
    while (n--) {
      ans += s;
    }
    return ans;
  }
  string decodeString(string s) {
    int n = s.size();
    int liof = s.find_last_of(']');
    string appen = s.substr(liof + 1, (n - liof));
    s = s.substr(0, liof + 1);
    cout << "   " << s << endl;
    cout << "   " << appen << endl;

    stack<char> st;
    for (char ch : s) {
      if (ch == ']') {
        string c_s = "";
        while (!st.empty() && st.top() != '[') {
          c_s += st.top();
          st.pop();
        }
        st.pop(); // valid code thus won't be empty
        string num;
        while (!st.empty() && isdigit(st.top())) {
          num += st.top();
          st.pop();
        }
        reverse(num.begin(), num.end());
        reverse(c_s.begin(), c_s.end());
        int ctn = stoi(num);
        c_s = (repeatNtimes(c_s, ctn));
        for (char aa : c_s) {
          st.push(aa);
        }
      } else {
        st.push(ch);
      }
    }
    string ans = "";
    while (!st.empty()) {
      ans += st.top();
      st.pop();
    }
    reverse(ans.begin(), ans.end());
    ans += appen;
    return ans;
  }
};
