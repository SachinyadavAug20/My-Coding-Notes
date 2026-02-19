#include <bits/stdc++.h>
#include <cstdio>
#include <string>
#include <utility>
using namespace std;

int main() {
  pair<int, string> p;
  p = make_pair(232, "Hello");
  cout << p.first << endl;
  cout << p.second << endl;
  p = {562, "kDe pLaSmA"};

  cout << p.first << " , " << p.second << endl;

  pair<int, string> p1 = p;  // pass by value
  pair<int, string> &p2 = p; // pass by refercence
  p1.second = "by value";
  cout << p.second << endl;
  p2.second = "by reference";
  cout << p.second << endl;

  // Used
  int a[] = {0, 1, 2, 3};
  int b[] = {2, 3, 4, 5}; // related a and b by numbers
    pair<int, int> p1_array[4];
    p1_array[0]={1,2};
    p1_array[1]={2,3};
    p1_array[2]={3,4};
    p1_array[3]={4,5};
    for (int i=0; i<4; i++) {
        cout<<"("<<p1_array[i].first<<" , "<<p1_array[i].second<<")"<<endl;
    }
    swap(p1_array[0],p1_array[3]);// relation aready maintained
    printf("\n");
    for (int i=0; i<4; i++) {
        cout<<"("<<p1_array[i].first<<" , "<<p1_array[i].second<<")"<<endl;
    }

    pair<string, string> name;
    cin>>name.first>>name.second;
    cout<<"Good morning,  "<<name.first<<" "<<name.second;
}
