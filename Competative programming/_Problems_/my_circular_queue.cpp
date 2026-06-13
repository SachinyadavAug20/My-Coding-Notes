#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class MyCircularQueueArray {
public:
  // can make circular queue of size k
    int rear=-1,front=-1;
    int sz;
    vector<int> q;
    MyCircularQueueArray(int k) {
      sz=k;
      q.assign(k,0);
    }
    
    bool enQueue(int value) {
      if((rear+1)%sz==front) return false;
      rear=(rear+1)%sz;
      if(front==-1) front=0; // initilize
      q[rear]=value;
      return true;
    }
    bool deQueue() {
        if(front==-1) return false;
        if(front==rear){
          front=rear=-1;
        }else {
          front=(front+1)%sz;
        }
        return true;
    }
    
    int Front() {
        if(front==-1) return -1;
        return q[front];
    }
    
    int Rear() {
        if(rear==-1) return -1;
        return q[rear];
    }
    
    bool isEmpty() {
        return (front==-1);
    }
    
    bool isFull() {
        return (rear+1)%sz==front;
    }
};

// linked list implementation
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class MyCircularQueue {
public:
    ListNode*front=NULL;
    ListNode*rear=NULL;
    int cap;
    int sz=0;
    MyCircularQueue(int k) {
      cap=k;
    }
    
    bool enQueue(int value) {
      if(sz==cap) return false;
      sz++;
      ListNode* n=new ListNode(value);
      if(front==NULL && rear==NULL){
        rear=front=n;
      }else{
        rear->next=n;
        rear=n;
      }
      return true;
    }
    bool deQueue() {
      if(front==NULL) return false;
      sz--;
      if(front==rear){
        delete front;
        front=rear=NULL;
      }else{
        ListNode* tm=front;
        front=front->next;
        delete tm;

      }
      return true;
    }
    
    int Front() {
      return front?front->val:-1;
    }
    
    int Rear() {
      return rear?rear->val:-1;
    }
    
    bool isEmpty() {
      return front==NULL;
    }
    
    bool isFull() {
      return sz==cap;
    }
};

