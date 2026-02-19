#include <bits/stdc++.h>
using namespace std;
// sum of elements of an array
int sum(int a[],int n){
  if(n==0){
    return a[0];
  }
  return a[n]+sum(a,n-1);
}

int main() {
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i){
    cin>>a[i];
  }

  printf("%d",sum(a,n-1));
}
// no of iteration = n = O(n)