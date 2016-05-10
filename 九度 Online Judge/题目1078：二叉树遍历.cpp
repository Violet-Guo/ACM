#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN = 30;
char preOrder[MAXN];    //前序 
char inOrder[MAXN];     //中序 
char ans[MAXN];
int cnt;


//// 返回root在前序中的位置
int GetPreOrderLoc(char root){
	int len = strlen(preOrder);
	for(int i = 0; i < len; i++){
		if(preOrder[i] == root){
			return i;
		}
	}
}

// 返回root在中序中的位置
int GetInOrderLoc(char root){
	int len = strlen(inOrder);
	for(int i = 0; i < len; i++){
		if(inOrder[i] == root){
			return i;
		}
	}
}

//递归处理子树inOrder[l...r]
//root为该子树的根节点，l r指的是在中序中的位置 
void dfs(char root, int l, int r){
	if(l <= r){
		int p1 = GetPreOrderLoc(root);    //root在前序中的位置
		int p2 = GetInOrderLoc(root);     //root在中序中的位置 
		//递归左子树
		dfs(preOrder[p1+1], l, p2-1);
		//递归右子树 
		dfs(preOrder[p1+p2-l+1], p2+1, r);
		ans[cnt++] = root;
	}
}

int main()
{
	while(scanf("%s %s", preOrder, inOrder)!=EOF){
		cnt = 0;
		dfs(preOrder[0], 0, strlen(preOrder)-1);
		
		for(int i = 0; i < cnt; i++){
			cout << ans[i];
		}
		cout << endl;
	} 
	return 0;
}

