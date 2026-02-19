#include <bits/stdc++.h>
using namespace std;

/*
Print the input in if it is present in the words 
*/

void printset(unordered_set<string> a) {
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << (*it) << endl;
  }
}

int main() {
  int q;
  cin >> q;
  unordered_set<string> words;
  while (q--) {
    string str;
    cin >> str;
    words.insert(str);
  }
  int n;
  cin >> n;
  while (n--) {
    string str;
    cin >> str;
    auto it = words.find(str);
    if (it == words.end()) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}
