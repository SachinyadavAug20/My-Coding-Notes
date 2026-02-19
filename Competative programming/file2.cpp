#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <map>
using namespace std;
#define ll long long

void printVect(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first.first << "," << a[i].first.second << ") " << "("
         << a[i].second.first << "," << a[i].second.second << ") " << endl;
  }
}
void printVectSS(vector<pair<pair<int, int>, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first.first << " " << a[i].first.second << " > " << a[i].second
         << endl;
  }
}

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n1,x;
    cin >> n1;
    multiset<int> a1;
    for (int i = 0; i < n1; i++) {
      cin >> x;
            a1.insert(x);
    }
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++) {
      cin >> x;
            int count_of_common=a1.count(x);
            while (count_of_common--) {
            cout<<x<<" ";
            }
            a1.erase(x);
    }
        for (int nn : a1) {
        cout<<nn<<" ";
        }
    cout << endl;

  }
  return 0;
}
