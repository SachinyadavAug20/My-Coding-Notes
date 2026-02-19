#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, multiset<string>> student; // as duplicate names can be there
  while (N--) {
    int mark;
    string name;
    cin >> name >> mark;
    if (student.find(-1*mark) == student.end()) {
      multiset<string> a = {name};
      student[-mark] = a;
    } else {
      student[-mark].insert(name);
    }
  }

  for (auto it = student.begin(); it != student.end(); it++) {
    multiset<string> namesOfsameMarks = it->second;
    for (auto jt = namesOfsameMarks.begin(); jt != namesOfsameMarks.end();
         jt++) {
      cout << *(jt) << " " << -1*(it->first) << endl;
    }
  }
}
