#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
      int n;
      cin >> n;
      string s;
      cin >> s;

      int dot_count = 0;
      bool has_three_consecutive = false;

      for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
          dot_count++;
        }
        if (i <= n - 3 && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
          has_three_consecutive = true;
          break;
        }
      }

      if (has_three_consecutive) {
        cout << 2 << endl;
      } else {
        cout << dot_count << endl;
      }
  }
  return 0;
}
