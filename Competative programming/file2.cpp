#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
using namespace std;
#define ll long long

void printVect(vector<int> a);
void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

const int N = 5e6 + 10;
vector<int> divisor[N];
vector<int> sumDivisor(N,0);

int countPrimes(int n) {
    vector<bool> isprime(n+10,1);
    isprime[0]=isprime[1]=0;
    int ctn=0;
    for (int i=2; i<n; i++) {
        if (isprime[i]) {
                ctn++;
                for (int j=2*i; j<n; j+=i) {
                isprime[j]=0;
            }
        }
    }
    return ctn;
}

int main(int argn, char *argv[]) {
    cout<<countPrimes(10)<<endl;
    cout<<countPrimes(0)<<endl;

    cout<<countPrimes(3)<<endl;
    cout<<countPrimes(2)<<endl;
    cout<<countPrimes(1)<<endl;
    cout<<countPrimes(205922)<<endl;
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
