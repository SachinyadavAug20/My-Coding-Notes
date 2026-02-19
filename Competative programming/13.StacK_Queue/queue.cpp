#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    queue<string> a;
    a.push("abc");
    a.push("def");
    a.push("ghi");
    a.push("jkl");
    a.push("mno");
    a.push("pqr");
    a.push("stv");
    while(!a.empty()){
      cout<<a.front()<<endl;
      a.pop();
    }
}
