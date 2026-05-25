// https://leetcode.com/problems/implement-queue-using-stacks/submissions/2012656691/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class MyQueue {
public:
  stack<int> pus;
  stack<int> po;
  MyQueue() {}

  void push(int x) { pus.push(x); }

  int pop() {
    if (po.empty()) {
      int a;
      while (!pus.empty()) {
        po.push(pus.top());
        pus.pop();
      }
    }

    int a = po.top();
    po.pop();
    return a;
  }

  int peek() {
    if (po.empty()) {
      int a;
      while (!pus.empty()) {
        po.push(pus.top());
        pus.pop();
      }
    }

    int a = po.top();
    return a;
  }

  bool empty() { return (po.empty() && pus.empty()); }
};

