#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#include <unistd.h>
#include <vector>
using namespace std;

vector<string> parentesiscombination;
void printvect(vector<string> a) {
  for (string s : a) {
    cout << s << " ";
  }
  cout << endl;
}
void geneate_parmas(int open, int close, string &s) {

  if (open == 0 && close == 0) {
    parentesiscombination.push_back(
        s); // save that string when all string consumed
        return; // as got a valid string
  }
  if (open > 0) {
    s.push_back('(');
    geneate_parmas(open - 1, close, s);
    s.pop_back(); // called back tracking as going back 1 step and bbring back orignal string REVERT STRING AFTER PASSED
  }
  if (open < close && close > 0) {  // as in string open>close thus in left open<close
    s.push_back(')');
    geneate_parmas(open, close - 1, s);
    s.pop_back();
  }
  // geneate_parmas(open, close, s);
}
int main() {
    string s="";
    geneate_parmas(2, 2, s);
    printvect(parentesiscombination);
}

