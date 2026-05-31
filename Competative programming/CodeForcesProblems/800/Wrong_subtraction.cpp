// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    while (k--) {
        n=n%10?n-1:n/10;
    }
    cout<<n<<endl;
}
