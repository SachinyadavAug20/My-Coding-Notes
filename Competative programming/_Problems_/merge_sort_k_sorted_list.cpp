#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  // sort taken 2 at a time => not efficient O(k*n)
  // merge taken 2 (all pair) at a time => efficient O(n*logn)
  //

  ListNode *mergeList(ListNode *l1, ListNode *l2) {
    ListNode *newhead = NULL;
    ListNode *t1 = l1;
    ListNode *t2 = l2;
    if (t1 == NULL && t2 == NULL) {
      return newhead;
    } else if (t1 == NULL) {
      return t2;
    } else if (t2 == NULL) {
      return t1;
    } else {
      if (t1->val > t2->val) {
        newhead = t2;
        t2 = t2->next;
      } else {
        newhead = t1;
        t1 = t1->next;
      }
      ListNode *temp = newhead;
      while (t1 != NULL && t2 != NULL) {
        if (t1->val > t2->val) {
          temp->next = t2;
          t2 = t2->next;
        } else {
          temp->next = t1;
          t1 = t1->next;
        }
        temp = temp->next;
      }

      if (t1 != NULL) {
        temp->next = t1;
      }
      if (t2 != NULL) {
        temp->next = t2;
      }
    }
    return newhead;
  }

  ListNode *mergeKLists(vector<ListNode *> &lists) {
    if (lists.size() == 0)
      return NULL;
    while (lists.size() > 1) {
      vector<ListNode *> mergeLists;
      int n = lists.size();
      for (int i = 0; i < n; i += 2) {
        ListNode *l1 = lists[i];
        ListNode *l2 = i + 1 < lists.size() ? lists[i + 1] : NULL;
        mergeLists.push_back(mergeList(l1, l2));
      }
      lists = mergeLists;
    }
    return lists[0];
  }
};
