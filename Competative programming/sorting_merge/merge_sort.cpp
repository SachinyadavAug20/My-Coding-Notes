#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

const int N = 1e5 + 10;
int a[N];

void merge(int l, int r, int m) { // l to m is LArray and m+1 to r is RArray
  int l_size = m - l + 1;
  int L[l_size + 1]; // made it 1 more size to keep largest int at last
  int r_size = r - (m + 1) + 1;
  int R[r_size + 1];
  for (int i = 0; i < l_size; i++) {
    L[i] = a[l + i];
  }
  for (int i = 0; i < r_size; i++) {
    R[i] = a[m + i + 1];
  }
  L[l_size] = R[r_size] = INT_MAX; // so avoid exaustion of array during merge
  // loop fom l to r
  int l_i = 0;
  int r_i = 0;
  for (int i = l; i <= r; i++) {
    if (L[l_i] >= R[r_i]) {
      a[i] = R[r_i];
      r_i++;
    } else {
      a[i] = L[l_i];
      l_i++;
    }
  }
}

void mergeSort(int l, int r) {
  if (l == r) {
    return;
  }
  int m = (l + r) / 2;
  mergeSort(l, m);
  mergeSort(m + 1, r);
  merge(l, r, m);
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  mergeSort(0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

// O(nlogn) log base 2 to n
