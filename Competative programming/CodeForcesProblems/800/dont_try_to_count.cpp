#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    string z, x;
    cin >> z >> x;

    string current = z;
    bool found = false;
    for (int i = 0; i <= 5; ++i) {
      if ((int)current.find(x) >= 0) {
        cout << i << endl;
        found = true;
        break;
      }
      current += current;
    }

    if (!found) {
      cout << -1 << endl;
    }
  }
  return 0;
}
