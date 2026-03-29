#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printVect(vector<unsigned> a);
void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

int binExpo(int a, int b, int m) {
  int ans = 1;
  while (b > 0) {
    if (b & 1) {
      ans = (ans * 1LL * a) % m;
    }
    a = (a * 1LL * a) % m;
    b = b >> 1;
  }
  return ans;
}
string intToRoman(int n) {
    string ans="";
    map<char, int> RtI;
    RtI['I']=1;
    RtI['V']=5;
    RtI['X']=10;
    RtI['L']=50;
    RtI['C']=100;
    RtI['D']=500;
    RtI['M']=1000;

    return ans;
}
int M=1e9+7;

int main(int argn, char *argv[]) {
    return 0;
}



/*
 https://codeforces.com/contest/776/problem/B
 https://www.hackerearth.com/problem/algorithm/the-game-of-oxa-bb3d2676/
 https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/
 https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/
 */






























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
