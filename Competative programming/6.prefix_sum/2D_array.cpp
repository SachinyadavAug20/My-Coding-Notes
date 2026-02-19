#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
Given 2d array a of N*N integers. Given Q queries and in each query given a, b, c and d print sum of square represented by (a,b) as top left point and (c,d) as bottom right point
Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9 
1 <= Q <= 10^5
1 <= a,b,c,d <= N 
*/

const int N = 1e3+10;
int prefixSum[N][N];

int main() {
  int n;
  cin>>n;
  int arr[n][n];
  for (int i = 1; i <=n; ++i)//make 1 based array
  {
    for (int j = 1; j <= n; ++j)
    {
    cin>>arr[i][j];
    prefixSum[i][j]=prefixSum[i][j-1]+prefixSum[i-1][j]-prefixSum[i-1][j-1]+arr[i][j];
    }
  }
  int q;
  cin>>q;
  while(q--){
    int l1,r1,l2,r2,sum=0;
    cin>>l1>>r1>>l2>>r2;
    cout<<prefixSum[l2][r2] - prefixSum[l2][r1-1]- prefixSum[l1-1][r2] + prefixSum[l1-1][r1-1]<<endl;
  }
}
// O(N*N) + O(Q*N*N) == O(N^3) == 10^3*10^3*10^5 == 10^11 iteration won't happen in 1s
// O(N*N) + O(Q) == O(N^2) == 10^3*10^3 == 10^6 iteration will happen in 1s

