#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  // graph idea 
  // a/b and b/c are know the a/c=(a/b)*(b/c)
  // a/b ,b/c and c/d are know the a/d=a/b*(b/c)*(c/d)
  // a->b is conneted by weight a/b
  //
  unordered_map<string,vector< pair<string, double>>> gp; // letter->leter,weight
  string target;
  unordered_set<string> ss;
  double dfs(string s,double val,unordered_map<string, bool> &v){
    if(s==target) return val;
    if(v[s]) return -1;
    v[s]=1;
    for(auto p:gp[s]){
      double x=dfs(p.first,val*p.second,v);
      if(x!=-1)return x;
    }
    return -1;
  }
  vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries) {
    ss.clear();
    int n = equations.size();
    for(int i=0;i<n;i++){
      double wt=values[i];
      string c1=equations[i][0];
      string c2=equations[i][1];
      ss.insert(c1);
      ss.insert(c2);
      gp[c1].push_back({c2,wt});
      gp[c2].push_back({c1,1/wt});
    }
    vector<double> ans;
    int q=queries.size();
    for(int i=0;i<q;i++){
      string c1=queries[i][0];
      string c2=queries[i][1];
      if(ss.find(c1)!=ss.end() && ss.find(c2)!=ss.end()){
        target=c2;
        unordered_map<string,bool> v;
        ans.push_back(dfs(c1, 1, v));
      }else{
        ans.push_back(-1);
      }
    }
    return ans;
  }
};
