#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}
void printVector(vector<int> a) {
  for (int n : a) {
    cout << n << " ";
  }
  cout << endl;
}
int main(int argn, char *argv[]) {
  vector<int> h = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  return 0;
}





































































































void printVect(vector<unsigned> a) {
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
































class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // monotonic decreasing stack problem
        // algo
        // compare to stack.top if greater found give distance at position in ans
        int n=temperatures.size();
        vector<int> ans(n);
        stack<pair<int,int>> st; // ind,temp
        for(int i=0;i<n;i++){
                while(!st.empty()&&st.top().second<temperatures[i]){
                    ans[st.top().first]=(i-st.top().first);
                    st.pop();
                }
            st.push({i,temperatures[i]});
        }
        while(!st.empty()){
            ans[st.top().first]=0;
            st.pop();
        }
        return ans;
    }
};
