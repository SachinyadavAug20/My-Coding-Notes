#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
    unordered_map<int, string> mp = {{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
    vector<string> ans;
    void dfs(string &digits, int i, string s) {
        if(i == digits.size()){
            ans.push_back(s);
        }
        for(char ch : mp[digits[i]-'0']) {
            s+=ch;
            dfs(digits, i+1, s);
            s=s.substr(0,s.size()-1);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        ans.clear();
        dfs(digits,0,"");
        return ans;
    }
};
