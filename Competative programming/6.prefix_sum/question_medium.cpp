// Starting with a 1-indexed array of zeros and a list of operations, for each
// operation add a value to each array element between two given indices,
// inclusive. Once all operations have been performed, return the maximum value
// in the array.
//
// Constraints
// • 3≤ n ≤ 107
// • 1 ≤ m≤ 2*105
// •1 ≤ a < b≤n
// • 0 ≤ k ≤ 109

#include <bits/stdc++.h>
using namespace std;

long long int find_largest_in_array(long long int a[], int n) {
  long long int max = 0;
  for (int i = 1; i <= n; ++i) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

const long long int N = 1e7;
long long int arr[N + 10]; // all initilaize to zero
long long int prefixSum[N + 10];

int main() {
  int n, q;
  cin >> n >> q;
  while (q--) {
    int start, end, to_add;
    cin >> start >> end >> to_add;
    // make it 1 indexed
    // for (int i = start; i <= end; ++i) {
    //   arr[i] =arr[i]+to_add;
    // }

    // OPTIMIZATION :
    //  DO a[start]+=to_add and a[end+1]-=to_add
    // then  to prefix sum
    arr[start] += to_add;
    arr[end + 1] -= to_add;
  }
  // to prefixSum
  for (int i = 1; i <= n + 1; ++i) {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }
  cout << find_largest_in_array(prefixSum, n) << endl;
}

// Time complexity
// O(q*(end-start) + n ) == O(n^2) == 2*10^5*10^7 == 2*10^12 iterations ===> TLE
// O(q*(1) + n + n ) == O(n) == 10^7 == 10^7 iterations ===> done in less than 1s
