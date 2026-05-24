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
    int giveDirection(int num){
        if(num==0) return 10;
        if(num<0) return -1;
        return +1;
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // ans will have all positive or all negative
        // 4 possible -> <- , -> ->, <- <- and <- -> only one will collide -> <-
        int n=asteroids.size();
        if(n==0) return {};
        stack<pair<int,int>> ast;
        ast.push({abs(asteroids[0]),giveDirection(asteroids[0])});
        for(int i=1;i<n;i++){
            while((!ast.empty() && ast.top().second==1)&&giveDirection(asteroids[i])==-1){ // for collision
                if(abs(asteroids[i])>ast.top().first){
                    ast.pop();
                }else if(abs(asteroids[i])<ast.top().first){
                    asteroids[i]=0;
                }else{
                    ast.pop();
                    asteroids[i]=0;
                }
            }
            if(asteroids[i]) ast.push({abs(asteroids[i]),giveDirection(asteroids[i])});
        }

        vector<int> ans;
        while(!ast.empty()){
            auto p=ast.top();
            ans.push_back(p.first*p.second);
            ast.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
