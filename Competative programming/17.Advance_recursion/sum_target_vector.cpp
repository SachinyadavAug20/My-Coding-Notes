#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void generate(int idx, vector<int> &arr, int target, vector<int> &cur) {
  if (target == 0) {
    ans.push_back(cur);
    return;
  }
  if (target < 0)
    return;

  for (int i = idx; i < arr.size(); i++) {
    cur.push_back(arr[i]);
    generate(i, arr, target - arr[i], cur); // i (not idx!)
    cur.pop_back();
  }
}

vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
  sort(arr.begin(), arr.end());
  ans.clear();
  vector<int> cur;
  generate(0, arr, target, cur);
  return ans;
}
int main() {
  vector<int> nums = {1, 2, 3};
  int target = 3;

  vector<vector<int>> res = targetSumComb(nums, target);
  for (auto &v : res) {
    for (int x : v)
      cout << x << " ";
    cout << "\n";
  }
}
