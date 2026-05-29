// https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
     int n;
     cin>>n;
     int steps=n/5;
     if(steps*5!=n) steps++;
     cout<<steps<<endl;
}
