#include <bits/stdc++.h>
#include <set>
#include <string>
using namespace std;
/*
 * They can have duplicate elements
 * It stores in lexiographical order Thus, it have O(logn)
 * It is a  replacement for priority queaes
 */

void printset(multiset<string> a) {
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << (*it) << endl;
  }
}

int main() {
  multiset<string> s;
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
                                   : *(s.find("21"))); // ==> O(logn) gives 1 instance of "21"
  auto it = s.find("Hello3");   // ==> give iterator of 1st istance only
  cout << endl;
  if (it != s.end()) {
    s.erase(it);
  }
  cout << endl;
  printset(s);
  s.erase("Hello3");  // This will erase all istance of it
  cout << endl;
  printset(s);
}

