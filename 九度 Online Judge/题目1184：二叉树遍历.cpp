#include<cstdio>
#include<iostream>
#include<cstring>
#include<malloc.h>
#include<algorithm>
using namespace std;

typedef struct Tree{
	char data;
	Tree *lchild, *rchild;
}Node, *BTree;

BTree T;
char str[150];
int cnt, len;

void createTree(BTree &T){
	if(cnt >= len)
		return;
	if(str[cnt] == '#')
		T = NULL;
	else{
		T = (Node *)malloc(sizeof(Node));
		T->data = str[cnt];
		T->lchild = T->rchild = NULL;
		cnt++;
		createTree(T->lchild);
		cnt++;
		createTree(T->rchild);
	}	
}

void inOrder(BTree &T){
	if(T == NULL)
		return;
	inOrder(T->lchild);
	cout << T->data << " ";
	inOrder(T->rchild);
}

int main()
{
	while(scanf("%s", str)!=EOF){
		cnt = 0;
		len = strlen(str);
		createTree(T);
		
		inOrder(T);
		cout << endl;
	}
	return 0;
}

