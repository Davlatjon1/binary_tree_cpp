 #include<iostream>
 #include<stdio.h>
 #include<stdlib.h>
using namespace std;
typedef int Data;

typedef struct Node{
	Data data;
	struct Node *left;
	struct Node *right;
} Node;

void tree_print(Node *tree);			// pechat' dereva
Node * tree_add(Node *tree, Data d); //dobavit' dannie

void tree_print(Node *tree){ //pechat' dereva
	if (tree==NULL){
//		cout<<"\nNULL: \n";
		return;
	}	
	tree_print(tree->left);
	cout<<tree->data<<" ";
	tree_print(tree->right);
}

void print(Node *tree){
	tree_print(tree);
	cout<<"\n";
}

Node *tree_add(Node *tree, Data d){ //add a date to tree
	if (tree==NULL){
		Node *t;
		t->data = d;
		t->left = t->right = NULL;
		
		return t;
	}
	if (d< tree->data){
		tree->left = tree_add(tree->left, d);
	}
	if (d> tree->data){
		tree->right = tree_add(tree->right, d);
	}
	return tree;
}

int main(){
	Node
		one = {1, NULL, NULL},
		two = {2, NULL, NULL},
		three = {3, NULL, NULL},
		five = {5, NULL, NULL},
		seven = {7, NULL, NULL},
		eight = {8, NULL, NULL},
		nine = {9, NULL, NULL};
	
	Node *tree = NULL; // ukazatel' na koren
	print(tree);

	tree = &seven;
	seven.left = &three; //naxodim levuyu pod semerki
	seven.right = &nine; //naxodim proav.
	three.left = &two;
	two.left = &one;
	three.right = &five;
	nine.left = &eight;
	
	print(&seven);
	return 0;
}
