#include <bits/stdc++.h>
#include <set>
#include <string>
using namespace std;

/*
Print the input in lexographical order
*/

void printset(set<string> a) {
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << (*it) << endl;
  }
}

int main() {
  int q;
  cin >> q;
  set<string> words;
  while (q--) {
    string str;
    cin >> str;
    words.insert(str);
  }
    printset(words);
}

