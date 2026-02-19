#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
/*
 * Next greatest integer in an array
 * */
void arrPrinter(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void next_Greatest_element_n_square(int a[], int n) {
  int NGE[n];
  for (int i = 0; i < n; i++) {
    int big = a[i];
    for (int j = i + 1; j < n; j++) {
      if (a[j] > big) {
        big = a[j];
        break;
      }
    }
    if (big == a[i]) {
      NGE[i] = -1;
    } else {
      NGE[i] = big;
    }
  }
  arrPrinter(NGE, n);
}
vector<int> SIR_next_Greatest_element_n_linear(vector<int> &a) {
  vector<int> nge(a.size());
  stack<int> index_of_NGE;
  for (int i = 0; i < a.size(); i++) {
    while ((!index_of_NGE.empty()) && (a[i] > a[index_of_NGE.top()])) {
      nge[index_of_NGE.top()] = i;
      index_of_NGE.pop();
    }
    index_of_NGE.push(i);
  }
  while (!index_of_NGE.empty()) {
    nge[index_of_NGE.top()] = -1; // This doesn't have next greater element
    index_of_NGE.pop();
  }
  // convert nge of index to nge of element
  for (int i = 0; i < nge.size(); i++) {
    if (nge[i] != -1) {
      nge[i] = a[nge[i]];
    }
  }

  return nge;
}

void next_Greatest_element_n_linear(int a[], int n) {
  int NGE[n], N = 0;
  stack<int> nums;
  for (int i = 0; i < n; i++) {
    while (!(nums.empty()) && (nums.top() < a[i])) {
      NGE[N] = a[i];
      N++;
      nums.pop();
    }
    while (!nums.empty() && nums.top() > a[i]) {
      NGE[N] = -1;
      N++;
    }
    nums.push(a[i]);
  }
  arrPrinter(NGE, n);
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  vector<int> arr1(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr[i] = a;
    arr1[i] = a;
  }
  // next_Greatest_element_n_square(arr, n);
  // next_Greatest_element_n_linear(arr, n);
  vector<int> NGE = SIR_next_Greatest_element_n_linear(arr1);
  // for (int i = 0; i < NGE.size(); i++) {
  //   cout << arr1[i] << " " << (NGE[i] == -1 ? -1 : (arr1[NGE[i]])) << endl;
  // }
  int j=0;
  for (int i : NGE) {
    cout <<arr[j]<<" "<< i << endl;
    j++;
  }
  cout << endl;
}

