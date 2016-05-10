#include<cstdio>
#include<cstring>
#include<iostream>
#include<malloc.h>
#include<algorithm>
using namespace std;

int num[10000], b[10000];
int cnt, n;

typedef struct Tree{
	int data;
	Tree *lchild, *rchild;
}Node, *BTree;

BTree T1;

void createTree(BTree &T, int i){
	if(i > n)
		return;
	
	if(T == NULL){
		T = (Node *)malloc(sizeof(Node));
		T->data = num[i];
		T->lchild = T->rchild = NULL;
	}
	else if(T->data > num[i]){
		createTree(T->lchild, i);
	}
	else if(T->data < num[i])
		createTree(T->rchild, i);
}

void build(BTree &T){
	T = NULL;
	for(int i = 1; i <= n; i++){
		createTree(T, i);
	}
}

void backOrder(BTree &T){
	if(T == NULL)
		return;
	backOrder(T->lchild);
	backOrder(T->rchild);
	b[cnt++] = T->data;
}

int main()
{
	int i;
	while(scanf("%d", &n)!=EOF){
		for(i = 1; i <= n; i++)
			cin >> num[i];
			
		build(T1);
		
		cnt = 0;
		backOrder(T1);
		
		for(i = 1; i <= n; i++){
			if(num[i] != b[i]){
				cout << "No" << endl;
				break;
			}
		}
		
		if(i == n){
			cout << "Yes" << endl;
		}
	}
	return 0;
}

