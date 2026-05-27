// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
    string s;
    cin>>s;
    unordered_set<char> hsh;
    for(char ch:s){
        hsh.insert(ch);
    }
    if(hsh.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}
