#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
  int q;
  cin>>q;
  while (q--) {
    string word;
    cin>>word;
    int n=word.length();
    if(n>10){
        word=word[0]+to_string(n-2)+word[n-1];
    }
    cout<<word<<endl;
  }
  return 0;
}
