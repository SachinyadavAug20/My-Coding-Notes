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

const int N = 1e5+10;
int a[N];
int preSum[N];

int main() {
  int n;
  cin>>n;
  int arr[n];
  for (int i = 1; i <=n; ++i)//make 1 based array
  {
    cin>>arr[i];
    preSum[i] = arr[i] + preSum[i-1];
  }
  int q;
  cin>>q;
  while(q--){
    int L,R;
    cin>>L>>R;
    cout<<preSum[R]-preSum[L-1]<<endl;
  }
  
}
// Old O(N)+O(Q*(L-R)) == O(N^2) == 10^5*10^5 == 10^10 iteration can't do in 1s 
// New O(N)+O(Q)+O(1) == O(N) == 10^5 iteraton can do in 1s

