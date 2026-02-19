#include <bits/stdc++.h>
using namespace std;
/*
difference btw the set and unordered set are
unordered is Hash implementation, it can't have complex datatype as the member as not have std libraies for it
*/

void printunordered_set(unordered_set<string> a) {
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << (*it) << endl;
  }
}

int main() {
  unordered_set<string> s;
  s.insert("Hello1"); // as it compares to keep in lexiographical order ==> O(n)
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
  cout << (s.find("21") == s.end() ? "invalid" : *(s.find("21"))); // ==> O(n)
  auto it = s.find("Hello2");
  cout << endl;
  if (it != s.end()) {
    s.erase(it);
  }
  cout << endl;
  printunordered_set(s);
  s.erase("10");
  cout << endl;
  printunordered_set(s);
}
