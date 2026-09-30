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
    void moveZeroes(vector<int>& nums) {
        vector<int> non_zero;
        int zz=0;
        for(int i:nums){
            if(i) non_zero.push_back(i);
            else zz++;
        } 
        vector<int> ans;
        for(int i:non_zero) ans.push_back(i);
        for(int i=0;i<zz;i++) ans.push_back(0);
        nums=ans;
        return;
    }
};
