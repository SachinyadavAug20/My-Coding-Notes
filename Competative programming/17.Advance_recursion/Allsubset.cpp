#include <bits/stdc++.h>
using namespace std;

vector<string> parentesiscombination;
void printvect(vector<vector<int>> a) {
  for (auto b : a) {
    for (int s : b) {

      cout << s << " ";
    }
    cout << endl;
  }
  // cout << endl;
}

vector<vector<int>> out;
void subsetter(vector<int> &subset, vector<int> &a, int coun) { // pass by reference
  if (coun == 0) {
    out.push_back(subset);
    return;
  }
  int i = a[a.size() - coun];
  subset.push_back(i);
  subsetter(subset, a, coun - 1);
  subset.pop_back();
  subsetter(subset, a, coun - 1);
}

vector<vector<int>> subsets(vector<int> &nums) {
  // out.clear();
  vector<int> o;
  subsetter(o, nums, nums.size());
  return out;
}

int main() {
  vector<int> nums = {1, 2, 3};
  vector<vector<int>> a1 = subsets(nums);
  printvect(a1);
}

