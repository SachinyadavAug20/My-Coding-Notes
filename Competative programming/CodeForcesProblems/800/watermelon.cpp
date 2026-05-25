// https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
  int n;
  cin>>n;
  if(n<=2){
      cout<<"NO";
  }else{
    if(n%2==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
  }
  return 0;
}

