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
    vector<int> sortArrayByParity(vector<int>& nums) {
        int ei = 0;
        int oi = nums.size() - 1;
        while (ei < oi) {
            while (ei < oi && nums[ei] % 2 == 0) ei++;
            while (ei < oi && nums[oi] % 2 != 0) oi--;
            if (ei < oi) {
                swap(nums[ei], nums[oi]);
            }
        }
        return nums;
    }
};
