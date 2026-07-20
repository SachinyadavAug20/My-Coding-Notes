#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // make all possible partitions
    //

    vector<vector<string>> ans;
    void dfs(string &s,int i,vector<string> &cu){
        if(i>=s.size()){
            ans.push_back(cu);
            return;
        }

        for(int j=i;j<s.size();j++){
            string temp=s.substr(i,j+1-i);
            cout<<temp<<",";
            string rev=temp;
            reverse(rev.begin(),rev.end());
            if(rev==temp){
                cu.push_back(temp);
                dfs(s,j+1,cu);
                cu.pop_back();
            }
        }
        cout<<endl;
    }
    vector<vector<string>> partition(string s) {
        ans.clear();
        vector<string> p;
        dfs(s,0,p);
        return ans;
    }// O(n^2)
};
