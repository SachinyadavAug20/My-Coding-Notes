#include <bits/stdc++.h>
#include <vector>
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
  // try to get size of linked list
  // subract n to get nth from last
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    int ctn=0;
    ListNode* temp=head;
    while (temp) {
      temp=temp->next;
      ctn++;
    }

    int pos=ctn-n-1;
    if(pos==-1){// 1st element goes is to be removed
      head=head->next;
    }else{
      temp=head;
      while (pos--) {
        temp=temp->next;
      }
      temp->next=temp->next->next;
    }
    return head;
  } // O(n) time and O(1) space Solution
};
