#include<cstdio>
#include<cstring>
#include<iostream>
#include<malloc.h>
#include<algorithm>
using namespace std;

typedef struct Tree{
	int data;
	Tree *lchild, *rchild;
}node, * BTree;

BTree T1;
int num[105];
int n;

void createTree(BTree &T, int a, int i){
	if(i > n)
		return;
	if(T == NULL){
		T = (node *)malloc(sizeof(node));
		T->data = num[i];
		T->lchild = T->rchild = NULL;
		cout << a << endl;
	}
	else if(T->data > num[i])
		createTree(T->lchild, T->data, i);
	else if(T->data < num[i])
		createTree(T->rchild, T->data, i);
}

void build(BTree &T){
	T = NULL;
	for(int i = 1; i <= n; i++){
		if(i == 1)
			createTree(T, -1, i);
		else	
			createTree(T, T->data, i);
	}		
}

int main()
{
	while(scanf("%d", &n)!=EOF){
		for(int i = 1; i <= n; i++)
			cin >> num[i];
			
		build(T1);
	}
	return 0;
}

