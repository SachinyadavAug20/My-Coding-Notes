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
  // left and right is position
  // use dummy node -> make less edge cases(before begining)
  // as it will give correct head and also solves current node

  ListNode *reverseBetween(ListNode *head, int left, int right) {
    ListNode* dummy=new ListNode(0,head);
    ListNode *curr = head;
    ListNode *prev = dummy;
    // reach the left side
    for(int i=0;i<left-1;i++){
      prev=curr;
      curr=curr->next;
    }
    // curr = at left and prev = curr->prev
    // do r-l+1 loop to reverse
    ListNode* Lp=prev;
    prev=NULL;
    for(int i=0;i<right-left+1;i++){
      // reverse
      ListNode* temp=curr->next;
      curr->next=prev;
      prev=curr;
      curr=temp;
    }

    // connect reversed part
    Lp->next->next=curr;
    Lp->next=prev;
    return dummy->next;
  } // O(n)
};
