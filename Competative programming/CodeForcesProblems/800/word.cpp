
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isCapital(char ch){
    return ch-'A'<26;
}
bool isSmall(char ch){
    return ch-'a'<26;
}

int main(){
    string s;
    cin>>s;
    int ctnC=0;
    for(char ch:s){
        if(isCapital(ch)){
            ctnC++;
        }
    }
    int ctnS=s.size()-ctnC;
    if(ctnS>=ctnC){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }else{
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}
