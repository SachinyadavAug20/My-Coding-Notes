#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
    int x=0;
    int q;
    cin>>q;
    while (q--) {
        string s;
        cin>>s;
        if(s[0]=='+'||s[2]=='+') x++;
        if(s[0]=='-'||s[2]=='-') x--;
    }
    cout<<x<<endl;
  return 0;
}

