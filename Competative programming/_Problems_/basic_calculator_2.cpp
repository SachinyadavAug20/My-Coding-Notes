#include <stack>
#include <string>
using namespace std;

class Solution {
public:
  int calculate(string s) {
    int n = s.length();
    if (n == 0)
      return 0;
    stack<int> st;
    long currentNumber = 0;
    char operation = '+';

    for (int i = 0; i < n; i++) {
      char curr = s[i];

      if (isdigit(curr)) {
        currentNumber = (currentNumber * 10) + (curr - '0');
      }

      if (!isdigit(curr) && !isspace(curr) || i == n - 1) {
        if (operation == '+') {
          st.push(currentNumber);
        } else if (operation == '-') {
          st.push(-currentNumber);
        } else if (operation == '*') {
          int top = st.top();
          st.pop();
          st.push(top * currentNumber);
        } else if (operation == '/') {
          int top = st.top();
          st.pop();
          st.push(top / currentNumber);
        }

        operation = curr;
        currentNumber = 0;
      }
    }

    int result = 0;
    while (!st.empty()) {
      result += st.top();
      st.pop();
    }

    return result;
  }
};
