// https://neetcode.io/problems/string-encode-and-decode/history?list=neetcode250&submissionIndex=0

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:

    string encode(vector<string>& strs) {
        string code;
        for(auto s:strs){
            string sz=to_string(s.size());
            code+=sz;
            code+='@'; // single delimiter
            code+=s;
        }
        // cout<<code;
        return code;
    }

    vector<string> decode(string s) {
        int n=s.size();
        vector<string> strs;
        int lookforstring=0,sz=0,stop=-1;
        string c_str;
        for(int i=0;i<n;i++){
            c_str+=s[i];    
            if(s[i]=='@' && i>stop){
                int sz=stoi(c_str);
                stop=i+sz;
                c_str="";
            }
            if(i==stop){
                strs.push_back(c_str);
                c_str="";
            }
        }
        return strs;
    }
};

