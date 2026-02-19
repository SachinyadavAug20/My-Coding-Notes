/*

AGGRCOW - Aggressive cows

Farmer John has built a new long barn, with N (2 ≤ N ≤ 100,000) stalls. The
stalls are located along a straight line at positions x1 ... xN (0 ≤ xi ≤
1,000,000,000).

His C (2 ≤ C ≤ N) cows don't like this barn layout and become aggressive towards
each other once put into a stall. To prevent the cows from hurting each other,
FJ wants to assign the cows to the stalls, such that the minimum distance
between any two of them is as large as possible. What is the largest minimum
distance? Input

t – the number of test cases, then t test cases follows.

    Line 1: Two space-separated integers: N and C
    Lines 2..N+1: Line i+1 contains an integer stall location, xi

Output

For each test case output one integer: the largest minimum distance.

*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printVec(vector<ll> a) {
  for (auto pr : a) {
    cout << pr << " ";
  }
  cout << endl;
}

const int N = 1e6 + 10;
ll arr[N];
int n, c;

bool isPossibleGap(int gap) {
  int cowOccupied = 0;
  stack<int> occupidSpots;
  // 1st spt should be occupied
  occupidSpots.push(arr[0]);
  cowOccupied++;
  for (int i = 1; i < n; i++) {
    if (cowOccupied == c) {
      break;
    }
    if (arr[i] - occupidSpots.top() >= gap) {
      occupidSpots.push(arr[i]);
      cowOccupied++;
    }
  }
  return cowOccupied == c;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + n); // O(nlogn)
    // binary search
    ll hi = 1e9 + 10, lo = 0;
    // it is predicate of type TTTTTTFFFFF
    while (hi - lo>1) {//O(log(1e9))
      ll midd = (hi + lo) / 2;
      if (isPossibleGap(midd)) {//O(n)
        lo = midd;
      } else {
        hi = midd-1;// false can't be answer
      }
      // cout<<midd<<">"<<isPossibleGap(midd)<<endl;
    }
    if (isPossibleGap(hi)) {
      cout << hi << endl;
    } else if (isPossibleGap(lo)) {
      cout << lo << endl;
    } else {
      cout << "Not found" << endl;
    }
  }

  return 0;
}
// Time complexity => O(nlogn+nlogn)==> O(nlog10^9)
