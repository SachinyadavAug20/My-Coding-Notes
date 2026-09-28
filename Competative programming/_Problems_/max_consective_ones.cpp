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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int curr=0;
        int prev=0;
        for(int i:nums){
            if(!i){
                curr=0;
            }else{
                curr++;
            }
            prev=i;
            ans=max(ans,curr);
        }
        return ans;
    }
};

