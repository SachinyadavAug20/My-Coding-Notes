// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    string s;
    cin>>n>>s;
    int cA=0,cD=0;
    for(char ch:s){
        if(ch=='A'){
            cA++;
            if(cA*2>n){
                cout<<"Anton";
                return 0;
            }
        }else{
            cD++;
            if(cD*2>n){
                cout<<"Danik";
                return 0;
            }
        }
    }
    cout<<"Friendship";
    return 0;
}
