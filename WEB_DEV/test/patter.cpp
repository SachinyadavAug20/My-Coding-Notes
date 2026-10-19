#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int n;
  cin>>n;
  int m=2*n-1;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      int val;
      cout<<n-min(min(i,j),m-max(i,j)-1)<<" ";
    }
    cout<<endl;
  }
}
