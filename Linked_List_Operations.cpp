#include <iostream>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *next;
};

void LinkedListTraversal(struct Node *ptr) {

  while (ptr != NULL) {
    std::cout << ptr->data << " ";
    ptr = ptr->next;
  }
}

void InsertAtStart(struct Node *ptr, struct Node *firstNode, int d) {
  firstNode->data = d;
  firstNode->next = ptr;
  ptr = firstNode;
}

void InsertAtEnd(struct Node *ptr, struct Node *lastNode, int d) {
  while (ptr->next != NULL) {
    ptr = ptr->next;
  }
  ptr->next = lastNode;
  lastNode->data = d;
  lastNode->next = NULL;
}

void InsertinBetween(struct Node *ptr, int d, int position) {
  struct Node *middle = (struct Node *)malloc(sizeof(struct Node));

  for (int i = 1; i < position - 1; i++) {
    if (ptr != NULL) {
      ptr = ptr->next;
    }
  }
  middle->next = ptr->next;
  ptr->next = middle;
  middle->data = d;
}

int main() {
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;
  struct Node *begin;
  struct Node *nbegin;
  struct Node *lnode;
  struct Node *l1node;
  // Allocate memory for node in the linked list in heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));
  begin = (struct Node *)malloc(sizeof(struct Node));
  nbegin = (struct Node *)malloc(sizeof(struct Node));
  lnode = (struct Node *)malloc(sizeof(struct Node));
  l1node = (struct Node *)malloc(sizeof(struct Node));

  // Link first and second node
  head->data = 9;
  head->next = second;

  // Linking second and third node
  second->data = 10;
  second->next = third;

  // End of the linked list
  third->data = 33;
  fourth->next = NULL;
  // Inserting 78 at the start
  InsertAtStart(head, begin, 78);
  std::cout << "\n";
  LinkedListTraversal(begin);
  std::cout << "\n";
  // Passing begin because it is now the first node in LL
  InsertAtStart(begin, nbegin, 99);
  std::cout << "\n";
  LinkedListTraversal(nbegin);
  InsertAtEnd(nbegin, lnode, 2);
  std::cout << "\n";
  LinkedListTraversal(nbegin);
  std::cout << "\n";
  InsertAtEnd(nbegin, l1node, 26);
  std::cout << "\n";
  LinkedListTraversal(nbegin);
  InsertinBetween(nbegin, 61, 3);
  std::cout << "\n";
  LinkedListTraversal(nbegin);
  InsertinBetween(nbegin, 5, 6);
  std::cout << "\n";
  LinkedListTraversal(nbegin);

  return 0;
}