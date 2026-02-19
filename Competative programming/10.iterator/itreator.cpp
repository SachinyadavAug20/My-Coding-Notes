#include <bits/stdc++.h>
using namespace std;

void printvect(vector<int> &a) {

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> a={1,2,3,4,5};
  printvect(a);
  vector<int> ::iterator it=a.begin();
  cout<<*(it+2)<<endl;

  for (int i = 0; i < a.size(); ++i)
  {
    cout<<*(it+i)<<" ";
  }
  cout<<endl;
  // OR way
  while(it!=a.end()){
    cout<<*(it)<<" ";
    it++;  
  }
  cout<<endl;
  // OR way
  for(vector<int> ::iterator i=a.begin();i!=a.end();i++){
    cout<<*(i)<<" ";
  }
}
