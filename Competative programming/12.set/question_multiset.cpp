#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int main() {
  int t, no_od_candie = 0;
  cin >> t;
  // To bages can have same number of candey so use multisets and will be sorted
  multiset<int> bages;
  while (t--) {
    int N, K;
    cin >> N >> K;
    while (N--) {
      int num;
      bages.insert(num);
    }
    
    auto it = bages.begin();
    // while (K--) {
    //   int big_bages = *(it);
    //   bages.erase(it); // remove the first instance of it only
    //   bages.insert(big_bages / 2);
    //   no_od_candie += big_bages;
    //   it = bages.begin();
    // }
    cout << no_od_candie << endl;
  }
}

