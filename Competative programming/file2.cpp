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

int binExpo(int a,int b,int m){
    int ans=1;
    while (b>0) {
        if (b&1) {
        ans=(ans*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b=b>>1;
    }
    return ans;
}


const int M=1e9+7; //prime
const int N=1e5+10; // all fact till here
vector<int> f(N);

int main(int argn, char *argv[]) {
    f[0]=f[1]=1;
    for (int i=2; i<N; i++) {
        f[i]=(i*1LL*f[i-1])%M;
    }
    int t;
    cin>>t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        // no of combination of n letters from k characters = kpn = k!/((k-n)!)
        ll nr=f[k];
        ll dr=(f[k-n]);
        cout<<(nr%M*binExpo(dr, M-2, M)%M)%M<<endl;
    }
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
