#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int ans=1;
    for(int i=0,j=n-1;i<n && j>=0;i++,j--){
        if(s1[i]!=s2[j]){
            ans=0;
        }
    }
    cout<<(ans?"YES":"NO");
    return 0;
}
