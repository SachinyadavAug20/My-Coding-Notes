#include <bits/stdc++.h>
using namespace std;

void printset(set<string> a) {
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << (*it) << endl;
  }
}

int main() {
  set<string> s;
  s.insert(
      "Hello1"); // as it compares to keep in lexiographical order ==> O(logn)
  s.insert("Hello2");
  s.insert("1");
  s.insert("3");
  s.insert("4");
  s.insert("10");
  s.insert("12");
  s.insert("24");
  s.insert("Hello3");
  s.insert("Hello3");
  s.insert("Hello3");
  s.insert("Hello3");

  for (string word : s) {
    cout << word << endl;
  }
  cout << (s.find("21") == s.end() ? "invalid"
                                   : *(s.find("21"))); // ==> O(logn)
  auto it = s.find("Hello2");
  cout << endl;
  if (it != s.end()) {
    s.erase(it);
  }
  cout << endl;
  printset(s);
  s.erase("10");
  cout << endl;
  printset(s);
}
