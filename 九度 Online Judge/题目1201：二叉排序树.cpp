#include<cstdio>
#include<cstring>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<malloc.h>
using namespace std;

int n;
int num[105];

typedef struct Tree{
	int data;
	struct Tree *rchild, *lchild;
}BiTNode, *BiTree;

BiTree T1;

void createTree(BiTree &T, int i){
	if(i > n)
		return;
	
	if(T == NULL){
		T = (BiTNode *)malloc(sizeof(BiTNode));
		T->data = num[i];
		T->lchild = T->rchild = NULL;
	}
	else if(T->data > num[i]){
		createTree(T->lchild, i);
	}
	else if(T->data < num[i])
		createTree(T->rchild, i);
	
}

void build(BiTree &T){
	T = NULL;
	for(int i = 1; i <= n; i++)
		createTree(T, i);
}

void preOrderTree(BiTree &T){
	if(T == NULL)
		return;
	cout << T->data << " ";
	preOrderTree(T->lchild);
	preOrderTree(T->rchild);
}

void inOrderTree(BiTree &T){
	if(T == NULL)
		return;
	inOrderTree(T->lchild);
	cout << T->data << " ";
	inOrderTree(T->rchild);
}

void backOrderTree(BiTree &T){
	if(T == NULL)
		return;
	backOrderTree(T->lchild);
	backOrderTree(T->rchild);
	cout << T->data << " ";
}

int main()
{
	while(scanf("%d", &n)!=EOF && n){
		for(int i = 1; i <= n; i++)
			cin >> num[i];
			
		T1 = NULL;
		build(T1);
		
		preOrderTree(T1);
		cout << endl;
		
		inOrderTree(T1);
		cout << endl;
		
		backOrderTree(T1);
		cout << endl;
	}
	return 0;
}

