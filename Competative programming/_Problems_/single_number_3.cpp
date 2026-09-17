#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// logic
// 1. take xor of all that should be cancel all duplicate
// 2 now have xor of a^b, need to sepaate them
// 3. take any bit which groups this 2 a,b in group => xor&(-xor)
// 4. now, have mask = xor & (-xor)
// 5. group a -> mask&num =0 and other group not => same xor to get a,b

class Solution {
public:
  vector<int> singleNumber(vector<int> &nums) {
    int xorAll = 0;

    for (int num : nums) {
      xorAll ^= num;
    }

    // get point of 1 ^ 0 => differentaite into groups
    int pos = 0;
    while ((xorAll & (1 << pos)) == 0) {
        pos++;
    }
    int bitMask = 1 << pos;

    int a = 0;
    int b = 0;

    for (int num : nums) {
      if (num & bitMask) {
        a ^= num;
      } else {
        b ^= num;
      }
    }

    return {a, b};
  }
};
