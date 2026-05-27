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
  s = s.substr(0, liof+1);
  cout<<"   "<<s<<endl;
  cout<<"   "<<appen<<endl;

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
      reverse(num.begin(),num.end());
      reverse(c_s.begin(),c_s.end());
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
  reverse(ans.begin(),ans.end());
  ans+=appen;
  return ans;
}
int main(int argn, char *argv[]) {
    cout<<decodeString("2[a3[b]]c");
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
