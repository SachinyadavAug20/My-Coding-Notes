#include <bits/stdc++.h>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define int long long

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss,ts;
        for(char c:s){
            if(c=='#' && ss.size()) ss.pop();
            else if(c!='#') ss.push(c);
        }
        for(char c:t){
            if(c=='#'&&ts.size()) ts.pop();
            else if(c!='#') ts.push(c);
        }

        if(ss.size()!=ts.size()) return false;
        while(ss.size()){
            char c1=ss.top(),c2=ts.top();
            if(c1!=c2) return false;
            ss.pop();
            ts.pop();
        }
        return true;
    }
};
