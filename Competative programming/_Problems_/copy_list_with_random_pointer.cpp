#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
  // making deep copy of list is easy 
  // but problem is the random 
  // WAY:
  // O(n) space store all pointer in memory 
  // make hsh map old node to new node;
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* newHead=new Node(head->val);
        Node* temp=newHead;
        Node* temph=head->next;
        while(temph!=NULL){
          temp->next=new Node(temph->val);
          temp=temp->next;
          temph=temph->next;
        }
        // hash map -> old:new
        unordered_map<Node*,Node*> hsh;
        temp=newHead;
        temph=head;
        while (temp!=NULL) {
          hsh[temph]=temp;
          temph=temph->next;
          temp=temp->next;
        }
        // final pass mark random in place
        temp=newHead;
        temph=head;
        while (temp!=NULL) {
          Node* r=temph->random;
          temp->random=hsh[r];
          temph=temph->next;
          temp=temp->next;
        }
        return newHead;
    } // O(n) O(n) space and time
};
