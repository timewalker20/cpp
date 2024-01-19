// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// // Define the maximum size of the stack
// #define MAX_STACK_SIZE 100

// // Stack data structure
// int stack[MAX_STACK_SIZE];
// int top = -1;

// // Function to push an element onto the stack
// void push(int value) {
//     if (top == MAX_STACK_SIZE - 1) {
//         printf("Stack overflow\n");
//         exit(EXIT_FAILURE);
//     }
//     stack[++top] = value;
// }

// // Function to pop an element from the stack
// int pop() {
//     if (top == -1) {
//         printf("Stack underflow\n");
//         exit(EXIT_FAILURE);
//     }
//     return stack[top--];
// }

// // Function to evaluate a postfix expression
// int evaluatePostfix(char postfix[]) {
//     for (int i = 0; postfix[i] != '\0'; i++) {
//         if (isdigit(postfix[i])) {
//             // If the character is a digit, push it onto the stack
//             push(postfix[i] - '0');
//         } else {
//             // If the character is an operator, pop two operands from the stack, perform the operation, and push the result back onto the stack
//             int operand2 = pop();
//             int operand1 = pop();

//             switch (postfix[i]) {
//                 case '+':
//                     push(operand1 + operand2);
//                     break;
//                 case '-':
//                     push(operand1 - operand2);
//                     break;
//                 case '*':
//                     push(operand1 * operand2);
//                     break;
//                 case '/':
//                     push(operand1 / operand2);
//                     break;
//                 default:
//                     printf("Invalid operator: %c\n", postfix[i]);
//                     exit(EXIT_FAILURE);
//             }
//         }
//     }

//     // The result should be the only element remaining in the stack
//     return pop();
// }

// int main() {
//     char postfixExpression[100];

//     // Input the postfix expression
//     printf("Enter a postfix expression: ");
//     scanf("%s", postfixExpression);

//     // Evaluate the postfix expression and display the result
//     int result = evaluatePostfix(postfixExpression);
//     printf("Result: %d\n", result);

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

// structure for node
struct Node
{
  int key;
  struct Node *left;
  struct Node *right;
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

Node *getSuccessor(Node *curr){
// 		to get inordersuccessor simply find
// 		extreme left of right subtree of node
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}

Node *delNode(Node *root, int x){
// 	if root is null(when node is not fouund)
    if(root==NULL)
        return root;
// 	if node is in left subtree
    if(root->key>x)
        root->left=delNode(root->left,x);
// 	if node is in right subtree
    else if(root->key<x)
        root->right=delNode(root->right,x);
    else{
// 		if left child is null then return right child in case both are null then it will return right child(null)

        if(root->left==NULL){
            Node *temp=root->right;
            delete root;
            return temp;
        }
// 		if left is not null and right is null then it will return right child
        else if(root->right==NULL){
            Node *temp=root->left;
            delete root;
            return temp;
        }
// 		when node has two child then find inorder successor and replace it with node and delete inorder successor
        else{
            Node *succ=getSuccessor(root);
            root->key=succ->key;
            root->right=delNode(root->right,succ->key);
        }
    }
    return root;
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
int main() {

	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
    root->left->left=new Node(3);
    root->left->right=new Node(7);
	root->right->left=new Node(13);
	root->right->right=new Node(17);
	int x=15;

	root=delNode(root,x);
	inorder(root);
}
