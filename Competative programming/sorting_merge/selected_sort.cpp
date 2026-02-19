#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// int min_in_array_of_int(int arr[], int n) { // O(n)
//   int min_index = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[min_index] > arr[i]) {
//       min_index = i;
//     }
//   }
//   return min_index;
// }

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    int minIndex = i;
    // Get min index
    for (int j = i; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
  printArray(arr, n);
}
