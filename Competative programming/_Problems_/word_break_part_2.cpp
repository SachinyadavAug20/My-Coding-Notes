#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

class Solution {
public:
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> memo;
    void dfs(int i,string &s,unordered_set<string> &st, string &cur,vector<string> &sentance){
        string key=to_string(i)+"#"+cur;
        if(memo.count(key)){

        }
        if(st.find(cur)!=st.end()){
            sentance.push_back(cur);
            if(i==s.size()){
                ans.push_back(sentance);
                sentance.pop_back();
                return;
            }
            string em="";
            em+=s[i];
            dfs(i+1, s, st, em, sentance);
            sentance.pop_back();
        }
        if(i==s.size()) return;
        cur+=s[i];
        dfs(i+1, s, st, cur, sentance);
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        ans.clear();
        memo.clear();
        vector<string> sentance;
        string cur="";
        dfs(0, s, st, cur, sentance);
        vector<string> oo;
        for(auto &v:ans){
            string str="";
            int sz=v.size();
            for(int i=0;i<sz;i++){
                str+=v[i];
                if(i!=sz-1){
                    str+=" ";
                }
            }
            oo.push_back(str);
        }
        return oo;
    }
};
