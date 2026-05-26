#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
  int n, k;
  cin >> n >> k;
  vector<int> scores(n);
  for(ll i=0;i<n;i++){
      cin>>scores[i];
  }
  int ctn=0;
  for(int i:scores){
      if(i>0 && i>=scores[k-1]) ctn++;
      else break;
  }
  cout<<ctn<<endl;
  return 0;
}
