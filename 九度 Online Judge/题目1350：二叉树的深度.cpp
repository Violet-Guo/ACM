#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct TreeNode{
	int lchild;
	int rchild;
};

TreeNode Tree[20];

int depthTree(int x, int n){
	if(x < 1 || x > n)
		return 0;
	if(Tree[x].lchild==-1 && Tree[x].rchild==-1){
		return 1;
	}
	int leftdepth = depthTree(Tree[x].lchild, n);
	int rightdepth = depthTree(Tree[x].rchild, n);
	return leftdepth >= rightdepth ? leftdepth+1 : rightdepth+1;
}

int main()
{
	int n, left, right, depth;
	while(scanf("%d", &n)!=EOF){
		for(int i = 1; i <= n; i++){
			cin >> left >> right;
			Tree[i].lchild = left;
			Tree[i].rchild = right;
		}
		
		int depth = depthTree(1, n);
		cout << depth << endl;
	}
	return 0;
}

