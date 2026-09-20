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
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos,neg;
        for(int i:nums){
            if(i>0) pos.push_back(i);
            else neg.push_back(i);
        }
        vector<int> ans;
        int pi=0,ni=0;
        for(int i=0;i<n;i++){
            if(i%2) ans.push_back(neg[ni]),ni++;
            else ans.push_back(pos[pi]),pi++;
        }
        return ans;
    }
};
