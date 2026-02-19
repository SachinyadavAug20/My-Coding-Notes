#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
// different btw map and unordered_map
// 1.implementation uses hash (maps used trees)
// 2.Time complexity as no comparision O(1)
// 3.valid keys can't be complex datatype if not hashable
// rest all fn remains same

void printMap(unordered_map<int, string> m) {
  cout << "Size = " << m.size() << endl;
  for (auto &pair : m) { // reference as don't want copy of it  ==> // O(n)
    cout << pair.first << " : " << pair.second // acess O(1)
         << endl;
  }
}

int main() {
  auto start = chrono::system_clock::now();


  unordered_map<int, string> m;
  m[3] = "cd";  // ==> O(1)
  m[1] = "abc"; // O(1)
  m[5] = "de";  // O(1)
  m[23];        // ==> O(1) by default value is empty string
                m[3]="new";   //it will be unique key and it will come at end is slighty grater than O(1) as it hash clashes
  m.insert(make_pair(10, "ten"));
  m.insert({20, "twenty"}); //  ==> O(1)  time for comparing not done

  // for (auto it = m.begin(); it != m.end(); it++) {
  //   cout << it->first << " : " << it->second
  //        << endl; // will give in order of keys from 1 to 20 in
  //                 // lexographical/dicitonary order
  // }
  // OR way
  cout << endl;
  printMap(m);
  auto it = m.find(1); // it return iterator of the key and if not found return
                       // the m.end()   ==> O(1)
  if (it == m.end()) {
    cout << "not found" << endl;
  } else {

    cout << "found this " << "(" << it->first << " : " << it->second << ")"
         << endl;
  }

  m.erase(1); // O(1)
  printMap(m);
  auto p1 = m.find(23);
  if (p1 == m.end()) {
    cout << "not found";
  } else {
    m.erase(p1); } // O(1)
  printMap(m);
  m.clear();
  printMap(m);

  auto end = chrono::system_clock::now();
  chrono::duration<double> elapsed_seconds = end - start;

  cout << "elapsed time: " << float(elapsed_seconds.count()) << "s"
       << std::endl;
}
