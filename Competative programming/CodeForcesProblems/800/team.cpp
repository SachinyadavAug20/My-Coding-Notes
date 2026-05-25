#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
  int n;
  cin>>n;
  int ctn=0;
  for(int i=0;i<n;i++){
      int x,y,z;
      cin>>x>>y>>z;
      if(x+y+z>=2)ctn++;
  }
  cout<<ctn;
  return 0;
}


