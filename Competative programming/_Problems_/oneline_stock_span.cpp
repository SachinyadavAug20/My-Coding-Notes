// https://leetcode.com/problems/online-stock-span/submissions/2012688607/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class StockSpanner {
public:
  // keep a stack of price and span
  // see the price and span and will get realation ship
  // if any preious has less that it it is sum of it's span. removing the used
  // value are grouped all consective group of less that the value
  // from each group face value will add or no value will add 
  stack<pair<int, int>> st; // price:span
  StockSpanner() {}

  int next(int price) {
    if (st.empty()) {
      st.push({price, 1});
      return 1;
    } else {
      int span = 1;
      while (!st.empty() && price >= st.top().first) {
        span += st.top().second;
        st.pop();
      }
      st.push({price, span});
      return span;
    }
  }
};
