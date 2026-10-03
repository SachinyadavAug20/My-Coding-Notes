#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *insertionSortList(ListNode *head) {
    ListNode dummy(0);
    ListNode *current = head;
    while (current != nullptr) {
      ListNode *nextNode = current->next;
      ListNode *prev = &dummy;
      while (prev->next != nullptr && prev->next->val <= current->val) {
        prev = prev->next;
      }
      current->next = prev->next;
      prev->next = current;
      current = nextNode;
    }

    return dummy.next;
  }
};
