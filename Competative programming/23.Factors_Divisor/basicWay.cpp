#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M = 1337;
void printVect(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

// b>10^18 will works as 32 bit happend in 32 times and greater

vector<int> divisorBruteForce(int n) {
  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      ans.push_back(i);
    }
  }
  cout << "count : " << ans.size() << endl;
  cout << "sum : " << accumulate(ans.begin(), ans.end(), 0) << endl;
  return ans;
} // O(n)

vector<int> divisor_till_root_n(int n) {
  vector<int> ans;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ans.push_back(i);
      // Problem it duplicates found in if n is perfect square
      if (i != n / i) {
        ans.push_back(n / i);
      }
    }
  }
  cout << "count : " << ans.size() << endl;
  cout << "sum : " << accumulate(ans.begin(), ans.end(), 0) << endl;

  return ans;
} // O(sqrt(n))

int main(int argn, char *argv[]) {
  int n;
  cin >> n;
  printVect(divisorBruteForce(n));
  printVect(divisor_till_root_n(n));
  return 0;
}
