#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    cout<<"Top is : "<<a.top()<<endl;
    while(!a.empty()){
      cout<<a.top()<<endl;
      a.pop();
    }
}

