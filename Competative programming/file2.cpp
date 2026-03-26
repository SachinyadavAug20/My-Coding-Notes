#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printVect(vector<int> a);
void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

int binExpo(int a, int b, int m) {
  int ans = 1;
  while (b > 0) {
    if (b & 1) {
      ans = (ans * 1LL * a) % m;
    }
    a = (a * 1LL * a) % m;
    b = b >> 1;
  }
  return ans;
}
string intToRoman(int n) {
    string ans="";
    map<char, int> RtI;
    RtI['I']=1;
    RtI['V']=5;
    RtI['X']=10;
    RtI['L']=50;
    RtI['C']=100;
    RtI['D']=500;
    RtI['M']=1000;

    return ans;
}

int main(int argn, char *argv[]) {
    int q;
    cin>>q;
    while (q--) {
        ll num;
        cin>>num;
        // last step will be by father as need exactly num ammount
        // as we can increase amount by number of days increased and mathematically to mimimize need 0 or 1 coin on a day to reach the amount so => answer is no of set bits on the number
        ll ctn=0;
        while (num>0) {
            if (num&1) {
                ctn++;
            }
            num=num>>1;
        }
        cout<<ctn<<endl;
    }
    return 0;
}


































void printVect(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first.first << "," << a[i].first.second << ") " << "("
         << a[i].second.first << "," << a[i].second.second << ") " << endl;
  }
}
void printVectSS(vector<pair<pair<int, int>, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first.first << " " << a[i].first.second << " > " << a[i].second
         << endl;
  }
}

void printprimefactors(vector<pair<int, int>> a) {
  for (auto pr : a) {
    cout << pr.first << "^" << pr.second << " ";
  }
  cout << endl;
}
