#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    unordered_map<string, bool> memo;
    int n;
    int maxLen=0;
    bool dfs(int i,unordered_set<string> &st,string &s,string &curW){
        string key = to_string(i) + "#" + curW;
        if (memo.count(key)) return memo[key];
        if (curW.size() > maxLen) return memo[key] = false;
        if(st.find(curW)!=st.end()){
            if(i==n){
                memo[key] = true;
                return true;
            }
            string word="";
            word+=s[i];
            if(dfs(i+1,st,s,word)){
                memo[key] = true;
                return true;
            }
        }
        if(i==n){ 
            memo[key] = false;
            return false;
        }
        curW+=s[i];
        if(dfs(i+1,st,s,curW)){
            memo[key] = true;
            return true;
        }
        memo[key]=false;
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        maxLen = 0;
        for (auto &w : wordDict) maxLen = max(maxLen, (int)w.size());
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        this->n=s.size();
        string soo="";
        return dfs(0,st,s,soo);
    }
};
