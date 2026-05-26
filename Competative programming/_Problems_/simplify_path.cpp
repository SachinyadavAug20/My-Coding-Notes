// https://leetcode.com/problems/simplify-path/submissions/2013790321/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  string simplifyPath(string path) {
    string c_s = "";
    deque<string> st;
    for (char ch : path) {
      if (ch == '/') {
        if (c_s != "" && c_s != ".") {
          st.push_back(c_s);
        }
        c_s = "";
      } else {
        c_s += ch;
      }
    }
    if (c_s != "" && c_s != ".") {
      st.push_back(c_s);
    }

    deque<string> aa;
    while (!st.empty()) {
      if (st.front() == "..") {
        st.pop_front();
        if (!aa.empty()) {
          aa.pop_back();
        }
      } else {
        aa.push_back(st.front());
        st.pop_front();
      }
    }

    string ans = "/";
    while (!aa.empty()) {
      ans += aa.front();
      aa.pop_front();
      if (aa.size() >= 1) {
        ans += "/";
      }
    }
    return ans;
  }
};

