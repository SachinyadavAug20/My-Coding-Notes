#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;
#define ll long long

const int M = 1337;

void printprimefactors(vector<pair<int, int>> a){
    for (auto pr  : a) {
    cout<<pr.first<<"^"<<pr.second<<" ";
    }
    cout<<endl;
}


vector<pair<int,int>> primeFactors(int n){
    vector<pair<int,int>> ans;
    int ctn=0;
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) {
ctn=0;
            while (n%i==0) {
                ctn++;
            n/=i;
            }
            ans.push_back({i,ctn});
        }
    }
    if (n>1) {
    ans.push_back({n,1});
    }
    cout<<endl;
    return ans;
} // O(sqrt(n))

int main(int argn, char *argv[]) {
    int n;
    cin>>n;
    printprimefactors(primeFactors(n));
  return 0;
}

