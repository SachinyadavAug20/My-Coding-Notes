#include <bits/stdc++.h>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

class Solution {
public:
    string clearDigits(string s) {
        int n = s.size();
        string ans = "";
        stack<char> st;
        for(int i = 0; i < n; i++){
            if(!isdigit(s[i])){
                st.push(s[i]);
            } else{
                st.pop();
            }
        }
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
