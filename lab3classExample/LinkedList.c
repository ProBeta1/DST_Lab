#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int val;
  struct node *next;
} node;

node * buildOneTwoThree(){
  node *head = (node *) malloc(sizeof(node));
  head->val = 1;
  head->next = (node *) malloc(sizeof(node));
  head->next->val = 2;
  head->next->next = (node*) malloc(sizeof(node));
  head->next->next->val = 3;
  head->next->next->next = NULL;
  return head;
}
// Adding new value to the front of the list
void Push(node **headref, int x){
  node * newNode = (node *) malloc(sizeof(node));
  newNode->val = x;
  newNode->next = *headref;
  *headref = newNode;
}
// Returns the Length of the linked list
int Length(node *head){
  int cnt = 0;
  for(node *current = head; current != NULL; current = current->next){
    cnt++;
  }
  return cnt;
}
// Print the elements of list
void printList (node *head){
  node *current = head;
  while(current != NULL){
     printf("%d ", current->val);
     current = current->next;
  }
  printf("\n");
}
void deleteList(node *head){
  node *current = head;
  while(head != NULL){
    head = head->next;
    free(current);
    current = head;
  }
}
int main(){
  node *head;
  int len;
  head = buildOneTwoThree(); // Start with {1, 2, 3}
  printList(head);
  Push(&head, 10); // {10, 1, 2, 3}
  printList(head);
  Push(& head->next, 11); //{10, 11, 1. 2, 3}
  printList(head);
  len = Length(head); // Computes that the length is 5.
  printf("%d\n", len);
  deleteList(head);
}
