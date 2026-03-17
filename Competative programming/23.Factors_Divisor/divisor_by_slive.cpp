#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printVect(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

const int N = 1e5 + 10;
vector<int> divisor[N];
vector<int> sumDivisor(N,0);

int main(int argn, char *argv[]) {
    divisor[0].push_back(0);
    divisor[1].push_back(1);
    for (int i=2; i<N; i++) {
        for (int j=i; j<N; j+=i) {
            // as j is multiple of i => i is divisor of j
            divisor[j].push_back(i);
            sumDivisor[j]+=i;
        }
    }   // O(n*logn)
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        cout<<sumDivisor[n]<<endl;
        printVect(divisor[n]);
    }
  return 0;
}

