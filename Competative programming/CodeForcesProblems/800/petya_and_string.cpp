// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int ans=0;
    for(int i=0;i<n;i++){
        char c1=tolower(s1[i]),c2=tolower(s2[i]);
        if(c1>c2){
            ans=1;
            break;
        }else if(c2>c1){
            ans=-1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}

