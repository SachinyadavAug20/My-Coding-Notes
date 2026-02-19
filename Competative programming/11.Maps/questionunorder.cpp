#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <utility>
using namespace std;
// given n string print them in only give frequency
// N can be 1e5
// str.size() is 100 , if it is 1e5 then also will work

int main() {
  int t;
  cin >> t;
  unordered_map<string, int> map;
  while (t--) {
    string str;
    cin >> str;
    map[str] = map[str] + 1; // stored the str and frequency
    // map.insert(make_pair(str, 1));
  }
  for (auto pair : map) {
    cout << pair.first << " " << pair.second << endl;
  }
}
