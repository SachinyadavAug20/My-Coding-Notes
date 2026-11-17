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

// obs
// gread take 1 at LSB to make it odd and put all other 1s at MSB places

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int c1=0;
        for(char ch:s) if(ch=='1') c1++;
        int c0=n-c1;
        string a="1";c1--;
        while (c0--) {
            a=a+'0';
        }
        while (c1--) {
            a=a+'1';
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
