#include<stdio.h>
#include<iostream>
using namespace std;
typedef int Data;

typedef struct Node{
	Data data;
	struct Node * left;
	struct Node * right;
} Node;

void tree_print(Node * tree);			// ������ ������
Node * tree_add(Node * tree, Data d); //�������� ������ � ������

int main(){
	Node
		one = {1, NULL, NULL},
		two = {2, NULL, NULL},
		three = {3, NULL, NULL},
		five = {5, NULL, NULL},
		seven = {7, NULL, NULL},
		eight = {8, NULL, NULL},
		nine = {9, NULL, NULL};
	
	Node * tree = NULL; // ��������� �� ������
	cout<<two.left;
	return 0;
}
