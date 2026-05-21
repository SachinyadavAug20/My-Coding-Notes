#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}
void printVector(vector<int> a) {
  for (int n : a) {
    cout << n << " ";
  }
  cout << endl;
}

bool is_digits(string &str) {
  return all_of(str.begin(), str.end(), ::isdigit);
}
int calPoints(vector<string> &operations) {
  stack<int> st;
  for (string s : operations) {
    // cout<<s<<endl;
    if (is_digits(s)) {
      st.push(stoi(s));
    } else if (s == "D") {
      int n = st.top();
      st.push(2 * n);
    } else if (s == "C") {
      st.pop();
    } else if (s == "+") {
      int n = st.top();
      st.pop();
      int m = st.top();
      st.pop();
      st.push(m);
      st.push(n);
      st.push(n + m);
    }
  }
  int ans = 0;
  while (!st.empty()) {
    ans += st.top();
    st.pop();
  }
  return ans;
}

int main(int argn, char *argv[]) {
  vector<string> ss = {"5","-2","4","C","D","9","+","+"};
  cout << calPoints(ss);
  return 0;
}

/*
https://codeforces.com/contest/776/problem/B
https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/
https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/
https://leetcode.com/problems/pacific-atlantic-water-flow/description/
https://leetcode.com/problems/island-perimeter/description/
https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
https://cp-algorithms.com/graph/depth-first-search.html
https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
https://www.geeksforgeeks.org/explore?page=1&sortBy=submissions&_gl=1*1fcocz3*_up*MQ..*_gs*MQ..
https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?page=1&sortBy=submissions
https://leetcode.com/problems/number-of-islands/description/
 */

void printVect(vector<unsigned> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first.first << "," << a[i].first.second << ") " << "("
         << a[i].second.first << "," << a[i].second.second << ") " << endl;
  }
}
void printVectSS(vector<pair<pair<int, int>, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first.first << " " << a[i].first.second << " > " << a[i].second
         << endl;
  }
}

void printprimefactors(vector<pair<int, int>> a) {
  for (auto pr : a) {
    cout << pr.first << "^" << pr.second << " ";
  }
  cout << endl;
}
