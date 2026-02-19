#include <bits/stdc++.h>
using namespace std;
void arrVect(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void arrVectPair(vector<pair<int, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first << " " << a[i].second << endl;
  }
  cout << endl;
}
bool should_i_swap(pair<int, int> a, pair<int, int> b) { // Comparator function
  // need to do increaing for 1st and decreasing 2nd

  // if (a.first != b.first) {
  //   if (a.first > b.first) {
  //     return false;
  //   } else {
  //     return true;
  //   }
  // }
  // if (a.first == b.first) {
  //   if (a.second < b.second) {
  //     return false;
  //   } else {
  //     return true;
  //   }
  // }

  // in comparentor fn false means sort and true means no sort so use this way
  // return what you want 1st should be greater or 2nd should be greater

  if (a.first != b.first) {
    return (a.first < b.first);
  } else if (a.first == b.first) {
    return (a.second > b.second);
  }

  return true;
}
int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    arr.push_back({a, b});
  }
  arrVectPair(arr);
  // sort(&arr[0]+2,(&arr[0]+n)); // start sorting from 2nd index
  // arrVect(arr);
  // sort(arr.begin(),arr.end());

  // n^2 sort
  // for (int i = 0; i < arr.size(); ++i) {
  //   for (int j = i + 1; j < arr.size(); j++) {
  //     if (should_i_swap(arr[i],
  //                       arr[j])) { // this logic of how to sort is in all
  //                                  // algorithums  ==> comparator function
  //       swap(arr[i], arr[j]);
  //     }
  //   }
  // }

  sort(arr.begin(), arr.end(),
       should_i_swap); // 3rd optional paramter is a fn name ( which should not
                       // have any overload )  logic is opposte reture false==>
                       // swap and return true==> no swap
  arrVectPair(arr);
}
