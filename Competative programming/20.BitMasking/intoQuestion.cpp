// Consider this problem: There are N≤5000 workers. Each worker is available
// during some days of this month (which has 30 days). For each worker, you are
// given a set of numbers, each from interval [1,30], representing his/her
// availability. You need to assign an important project to two workers but they
// will be able to work on the project only when they are both available. Find
// two workers that are best for the job — maximize the number of days when both
// these workers are available.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// print binary
void printBinary(int num) {
  for (int i = 31; i >= 0; i--) {
    cout << ((num >> i) & 1);
  }
  cout << endl;
}

int main(int argn, char *argv[]) {
  int nW;
  cin >> nW;
  vector<int> daysMask(nW);
  for (int i = 0; i < nW; i++) {
    int t;
    cin >> t;
    int mask = 0;
    while (t--) {
      int day;
      cin >> day; // set day^th bit
      mask = (mask | (1 << day));
    }
    daysMask[i] = mask;
    printBinary(mask);
  }

  cout << endl;
  int max = 0, person1, person2;
  for (int i = 0; i < nW; i++) {
    for (int j = i + 1; j < nW; j++) {
      printBinary(daysMask[i] & daysMask[j]);
      int intersections = __builtin_popcount(daysMask[i] & daysMask[j]);
      if (max < intersections) {
        max = intersections;
        person1 = i;
        person2 = j;
      }
    }
  }

  cout << endl
       << max << endl
       << "person1 : " << person1 << " ,person2 : " << person2 << endl;
  // O(n^2*1)== O(n^2)
  return 0;
}


// 5
// 4
// 1 4 7 9
// 6
// 2 9 1 7 25 29
// 7
// 1 23 4 7 9 11 29
// 10
// 2 28 8 7 9 10 30 21 18 19
// 4
// 1 11 29 7
//
// O/P : 
// 4
// person1 : 0 ,person2 : 2
