#include <bits/stdc++.h>
#include <utility>
using namespace std;

void printvect(vector<pair<int, int>> &a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first <<","<< a[i].second << ")" << " ";
  }
  cout << endl;
}

int main() { 
    vector<pair<int, int>> v_of_p = {{1, 2}, {2, 3}, {3, 4}, {4, 5}}; 
    printvect(v_of_p);
    int n;
    cin>>n;
    while (n--) {
        int a,b;
        cin>>a>>b;
        v_of_p.push_back({a,b});
    }
    printvect(v_of_p);

}
