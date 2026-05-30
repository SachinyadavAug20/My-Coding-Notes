// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    string s;
    cin>>n>>s;
    int ans=0;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
// red green blue stones
// min to remove so different color
