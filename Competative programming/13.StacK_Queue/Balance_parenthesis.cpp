/*
From the given string of parentesis
tell if it is balanced or not
 */
#include <bits/stdc++.h>
#include <stack>
using namespace std;
// use unordered maps ==> to map the symboel to -ve and +ve int
unordered_map<char, int> symbols = {{'(', -1}, {')', 1},  {'{', -2},
                                    {'}', 2},  {'[', -3}, {']', 3}};
bool SIR_check_balanced_forMulti_type_of_brackey(string s) {
  // know -ve is opening and +ve is closing and if same type of opening and
  // closng will sum to zero
  stack<char> brackets;
  for (char ch : s) {
    if (symbols[ch] < 0) {
      brackets.push(ch);
    } else {
      if (brackets.empty()) {
        return false;
      }
      char top = brackets.top();
      brackets.pop();
      if (symbols[ch] + symbols[top] != 0) {
        return false;
      }
    }
  }
  if (brackets.empty()) {
    return true;
  }
  return false;
}

bool check_balanced_forsingle_type_of_brackey(string s) {
  stack<char> openingbrackets; // As closing bracket closes the most recent
                               // opening bracked
  for (char ch : s) {
    // Use ASCII
    if (ch == '(') {
      openingbrackets.push(ch); // Opened a new bracket
    } else {
      if (openingbrackets.empty()) { // closing bracket closed no opeing bracked
                                     // then unbalanced
        return false;
      }
      openingbrackets.pop(); // closed the recent opening bracket
    }
  }
  if (openingbrackets.empty()) { // if all opening are closed then only balanced
    return true;
  } else {
    return false;
  }
}

bool check_balanced_forMultiple_type_of_bracket(string s) {
  // can't make multiple stack as ({)} is also unbalanced so use 1 stack only
  stack<char> openingBrackets;
  for (char ch : s) {
    // Use ASSCI to solve this
    if (ch == '(' || ch == '[' || ch == '{') {
      openingBrackets.push(ch);
    } else {
      if (openingBrackets.empty()) {
        return false;
      } else if (ch == ')') {
        if (openingBrackets.top() == '(') {
          openingBrackets.pop();
        } else {
          return false;
        }
      } else if (ch == ']') {
        if (openingBrackets.top() == '[') {
          openingBrackets.pop();
        } else {
          return false;
        }
      } else if (ch == '}') {
        if (openingBrackets.top() == '{') {
          openingBrackets.pop();
        } else {
          return false;
        }
      }
    }
  }
  if (openingBrackets.empty()) {
    return true;
  }
  return false;
}

int main() {
  string str;
  cin >> str;
  cout << check_balanced_forMultiple_type_of_bracket(str) << endl;
  cout << SIR_check_balanced_forMulti_type_of_brackey(str) << endl;
}
