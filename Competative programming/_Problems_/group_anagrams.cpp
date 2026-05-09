// https://leetcode.com/problems/group-anagrams/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n=strs.size();
    unordered_map<string, vector<string>> hsh;
    for(int i=0;i<n;i++){
        string curr=strs[i];
        vector<int> fq(26,0);
        for(char ch:curr){
            fq[ch-'a']++;
        }
        string signature="";
        for(int a:fq){
            signature+=(to_string(a));
            signature+=("%");
        }
        hsh[signature].push_back(strs[i]);
    }
    vector<vector<string>> ans;
    for(auto ss:hsh){
        vector<string> st;
        for(string s:ss.second){
            st.push_back(s);
        }
        ans.push_back(st);
    }
    return ans;
}
