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

int main(int argn, char *argv[]) {
  int n;
  cin >> n;
  int ctn = 0;
  for (int i = 0; i < n; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x + y + z >= 2)
      ctn++;
  }
  cout << ctn;
  return 0;
}

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
