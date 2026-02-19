/*

EKO - Eko

Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.

Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.
Input

The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).

The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres). The sum of all heights will exceed M, thus Mirko will always be able to obtain the required amount of wood.
Output

The first and only line of output must contain the required height setting.


*/
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printVec(vector<ll> a) {
  for (auto pr : a) {
    cout << pr << " ";
  }
  cout << endl;
}

const int N = 1e6 + 10;
int n;
ll m;
vector<ll> treeH(N);

bool isSufficient(int H) {
  ll woodGot = 0;
  for (int i = 0; i < n; i++) {
    // only bigger tress will contribute to this
    if (treeH[i] >= H) { // tree is bigger than our heght
      woodGot += (treeH[i]-H);
    }
  }
  return woodGot >= m;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> treeH[i];
  }
  // no need to store it in some array it is imaginary array from 0-max_height
  ll hi = 1e9, lo = 0;
  // from 0 to n-1 will be TTTFFF perdicate fn => need last true
  while (hi - lo > 1) {
    ll midd = (hi + lo) / 2;
    if (isSufficient(midd)) {
      lo = midd; // midd can also be answer
    } else if (!isSufficient(midd)) {
      hi = midd - 1; // false is not answer
    }
    // cout << lo << ">" << isSufficient(lo) << " " << hi << ">" << isSufficient(hi) << endl;
  }

  if (isSufficient(hi)) {
    cout << hi;
  } else if (isSufficient(lo)) {
    cout << lo;
  } else {
    cout << "No possible";
  }

  return 0;
}

// time complexity ==> O(N*log(1e9))==> O(nlogN) => O(no_of_tress*log(max_height))
