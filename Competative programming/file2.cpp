#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}
void printVector(vector<int> a) {
  for (int n : a) {
    cout << n << " ";
  }
  cout << endl;
}

int main(int argn, char *argv[]) { return 0; }

void printVect(vector<unsigned> a) {
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























class Solution {
public:
// merging array will be O(m+n) so, not possible
// as need Solution in O(log(m+n))
// for it must use binary search
// median -> middle value(if 2 middle then, average of it)
// divide
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    vector<int> &A = nums1;
    vector<int> &B = nums2;
    if (A.size() > B.size()) swap(A, B);
    // now A is samll and B is big
    int n = A.size();
    int m = B.size();
    int total = n + m;
    int half = (total + 1) / 2; // round up
    int l = 0;
    int r = n - 1;
    // binary search on A
    while (l <= r) {
      int cutA = l + (r - l) / 2;
      int cutB = half - cutA;
      int Aleft = (cutA == 0) ? INT_MIN : A[cutA - 1];
      int Aright = (cutA == n) ? INT_MAX : A[cutA];
      int Bleft = (cutB == 0) ? INT_MIN : B[cutB - 1];
      int Bright = (cutB == m) ? INT_MAX : B[cutB];
      // perfect partition
      if (Aleft <= Bright && Bleft <= Aright) {
        if (total % 2) {
          return max(Aleft, Bleft);
        }
        return (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0;
      }
      // fix to get perfect partition
      if (Aleft > Bright) {
        r = cutA - 1;
      } else {
        l = cutA + 1;
      }
    }
    return 0.0;
  }
};
