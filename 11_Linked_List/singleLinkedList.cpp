#include<iostream>
using namespace std;

class Node {

public: 
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void insertAtFirst(int data, Node* &ptr) {
  
  Node* head = new Node(data);
  head->next = ptr;
  ptr = head;

  return;
  
}

void insertAtLast(int data, Node* ptr) {

  Node* tail = new Node(data);

  while(ptr->next != NULL) {
    ptr = ptr->next;
  }

  ptr->next = tail;

  return;
}


void insertAtParticularPostion(int data, Node* &head, int index) {

  int idx = 0;
  Node* ptr = head;
  Node* newNode = new Node(data);

  if (idx == index) {
    
    insertAtFirst(data, head);
  
  } else {
    
    while(idx != index - 1) {
      ptr = ptr->next;
      idx++;
    }

    newNode->next = ptr->next;
    ptr->next = newNode;
  }

  

  return;
}

void printLinkedList(Node* head) {

  while(head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }

  return;
}


int main() {

  Node* head = new Node(7);

  // insertAtFirst(6, head);
  // insertAtFirst(5, head);
  // insertAtFirst(4, head);
  insertAtFirst(3, head);
  insertAtFirst(2, head);
  insertAtFirst(1, head);

  insertAtLast(8, head);
  // insertAtLast(9, head);
  // insertAtLast(10, head);
  // insertAtLast(11, head);
  // insertAtLast(12, head);
  // insertAtLast(13, head);
  // insertAtLast(14, head);

  insertAtParticularPostion(9, head, 2);
  insertAtParticularPostion(4, head, 6);
  insertAtParticularPostion(0, head, 0);
  insertAtParticularPostion(10, head, 8);



  printLinkedList(head);


  return 0;
}