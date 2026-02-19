#include <bits/stdc++.h>
using namespace std;

void printvect(vector<int> &a) {

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<pair<int,int>> a={{1,2},{2,3},{3,4}};
  for( vector<pair<int,int>> ::iterator it=a.begin();it!=a.end();it++){
    cout<<"("<<(*it).first<<","<<(*it).second<<")"<<' ';
  }
  cout<<endl;
// OR way
  for( vector<pair<int,int>> ::iterator it=a.begin();it!=a.end();it++){
    cout<<"("<<it->first<<","<<it->second<<")"<<' ';
  }
}
