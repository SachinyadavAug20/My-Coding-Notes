#include <algorithm>
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
    string reverseWords(string s) {
        string ans="";
        string curW;
        for(char ch:s){
            if(ch==' '){
                reverse(curW.begin(),curW.end());
                ans+=curW+" ";
                curW="";
            }else{
                curW+=ch;
            }
        }
        reverse(curW.begin(),curW.end());
        ans+=curW;
        return ans;
    }
};
