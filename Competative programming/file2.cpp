#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long

void printVect(vector<int> a);
void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

double myPow(double x, int n) {
    // if (x==1) {
    // return 1;
    // }
  double ans = 1;
    unsigned b= abs(n);  // b= |n|
    // cout<<n<<"       "<<b<<endl;
    while (b > 0) {
      if (b & 1) {
        ans = ans * x;
      }
      x = x * x;
      b= b >> 1;
    }

    if (n>0) {
    return ans;
    }
    else {
    return 1/ans;
    }
}

int main(int argn, char *argv[]) {
  cout << myPow(2, 10) << endl;
  cout << myPow(2.1, 3) << endl;
  cout << myPow(2, -2) << endl;
  cout << myPow(1, -2147483648) << endl;

  return 0;
}























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

void printprimefactors(vector<pair<int, int>> a) {
  for (auto pr : a) {
    cout << pr.first << "^" << pr.second << " ";
  }
  cout << endl;
}
