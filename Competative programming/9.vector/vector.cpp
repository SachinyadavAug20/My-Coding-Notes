#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void printvect(vector<int> &a) {

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  //  a.push_back(92); // won't change it as copy send not the vector and copy
  //  is expensive so make always call by reference then it will effect
}

int main() {
  vector<int> arr;
  cout << arr.size() << endl; // currently size is zero
  arr.push_back(234);
  cout << arr.size() << endl; // currently size is 1

  vector<int> v(5);
  printvect(v);
  v.push_back(12);
  v.push_back(12);
  printvect(v);

  vector<int> v2(4, 69);
  printvect(v2);
  v2.push_back(23);
  v2.push_back(32);
  printvect(v2);
  v2.pop_back();
  printvect(v2);

  // copy of vector
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  a.push_back(4);
  a.push_back(5);
  a.pop_back();

  vector<int> b =
      a; // made a copy  ==> O(n) operation this is expensive operation
  vector<int> &c = a; // call by reference thus O(1)
  printvect(a);
  printvect(b);
  printvect(c);
  b[2] = 123;
  c[2] = 456;
  b.push_back(95);
  printvect(a);
  printvect(b);
  printvect(c);
}
