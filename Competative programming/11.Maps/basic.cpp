#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void printMap(map<int, string> m) {
  cout << "Size = " << m.size() << endl;
  for (auto &pair : m) { // reference as don't want copy of it  ==> // O(nlogn)
    cout << pair.first << " : " << pair.second // acess O(logn)
         << endl; // will give in order of keys from 1 to 20 in
                  // lexographical/dicitonary order
  }
}

int main() {
  auto start = chrono::system_clock::now();

  map<int, string> m;
  m[3] = "cd";  // ==> O(logn)
  m[1] = "abc"; // O(logn)
  m[5] = "de";  // O(logn)
  m[23];        // ==> O(logn) by default value is empty string
                // m[2]="new";   //it will be unique key
  m.insert(make_pair(10, "ten"));
  m.insert({20, "twenty"}); //  ==> O(str.size()*logn)  time for comparing (as
                            //  map is ordered) string of size is str.size()

  for (map<int, string>::iterator it = m.begin(); it != m.end(); it++) {
    cout << it->first << " : " << it->second
         << endl; // will give in order of keys from 1 to 20 in
                  // lexographical/dicitonary order
  }
  // OR way
  cout << endl;
  printMap(m);
  auto it = m.find(1); // it return iterator of the key and if not found return
                       // the m.end()   ==> O(logn)
  if (it == m.end()) {
    cout << "not found" << endl;
  } else {

    cout << "found this " << "(" << it->first << " : " << it->second << ")"
         << endl;
  }

  m.erase(1); // O(logn)
  printMap(m);
  auto p1 = m.find(23);
  if (p1 == m.end()) {
    cout << "not found";
  } else {
    m.erase(p1);
  } // O(logn)
  printMap(m);
  m.clear();
  printMap(m);

  auto end = chrono::system_clock::now();
  chrono::duration<double> elapsed_seconds = end - start;

  cout << "elapsed time: " << float(elapsed_seconds.count()) << "s"
       << std::endl;
}
