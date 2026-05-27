// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
  string s;
  cin>>s;
  unordered_map<int, char> hsh;
  for(char ch:s){
      if(ch!='+'){
          hsh[ch]++;
      }
  }
  string ans;
  while(hsh['1']--){
      ans+='1';
      ans+='+';
  }
  while(hsh['2']--){
      ans+='2';
      ans+='+';
  }
  while(hsh['3']--){
      ans+='3';
      ans+='+';
  }
  ans=ans.substr(0,ans.size()-1);
  cout<<ans<<endl;
  return 0; 
}
