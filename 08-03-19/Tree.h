#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

// Binary Tree node
typedef struct node{
  int val;
  struct  node* left;
  struct  node* right;
} node;
/*
Helper function that allocates a new node
with the given data and NULL left and right
pointers.
*/
node* newNode(int x){
  node * newnode = (node *)malloc(sizeof(node)); // new(node);
  newnode->val = x;
  newnode->left = NULL;
  newnode->right = NULL;
  return newnode;
}

/*
Builds the following little 1-2-3 Binary search tree
      2
    /  \
  1     3

*/
node * build123(){
  node *root = newNode(2);
  root->left = newNode(1);
  root->right = newNode(3);
  return root;
}

// print all  the nodes of tree
void printTree(node *root){
// base Case
  if (root == NULL){
    printf("\n");
    return;
  }
  // recursive Case
  printTree(root->left);
  printTree(root->right);
}


/*   3
  2
     1
*/
void printSideways(node *root, int gap = 0){
  if (root == NULL)
    return;
  printSideways(root->right, gap + 1);
  // print gap
  for(int i = 0; i < gap; i++)
      printf("  ");
  printf("%d\n", root->val);

  printSideways(root->left, gap + 1);

}

// BST insert
node *insert(node *root, int data){
  //base Case
  if (root == NULL){
    root = newNode(data);
    return root;
  }
  // recursive Case
  if (root->val < data){
    root->right = insert(root->right, data);
  }
  else if (root->val > data)
    root->left = insert(root->left, data);
}

// return number of nodes in tree
int size(node *root){
  if (root == NULL)
    return 0;
  int l = size(root->left);
  int r = size(root->right);
  return (l + r + 1);
}

// longest path from root to leaf
int maxDepth(node *root){
  if (root == NULL)
    return 0;
  int l = maxDepth(root->left);
  int r = maxDepth(root->right);
  return (max(l, r) + 1);
}

// searches for the given data in the tree
int lookup(node *root, int data){
  if (root == NULL)
    return false;
  return (root->val == data or lookup(root->left, data) or lookup(root->right, data));
}

// returns minimum value in the given BST
int minValue(node *root){
  if (root->left == NULL)
    return root->val;
  return minValue(root->left);

}
/*
Given a tree and a sum, return true if there is a path from the root
down to a leaf, such that adding up all the values along the path
equals the given sum.
Strategy: subtract the node value from the sum when recurring down,
and check to see if the sum is 0 when you run out of tree.
*/
int hasPathSum(struct node* node, int sum) {
// return true if we run out of tree and sum==0
  if (node == NULL) {
    return(sum == 0);
  }
  else {
    // otherwise check both subtrees
    int subSum = sum - node->val;
    return(hasPathSum(node->left, subSum) || hasPathSum(node->right, subSum));
  }
}


/*
Given a binary tree, print out all of its root-to-leaf
paths, one per line. Uses a recursive helper to do the work.
*/
void printPaths(struct node* node) {
//TODO
}


/*
Change a tree so that the roles of the left and right pointers are swapped at every node.
*/
void mirror(node *root){
  if (root == NULL)
    return;
  node *temp = root->left;
  root->left = root->right;
  root->right = temp;
  mirror(root->left);
  mirror(root->right);
}
/*
For each node in a binary search tree,
create a new duplicate node, and insert
the duplicate as the left child of the original node.
The resulting tree should still be a binary search tree.
So the tree...

*/
void doubleTree(struct node* node) {
// TODO
}
