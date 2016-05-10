#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN = 30;
char preOrder[MAXN];    //ǰ�� 
char inOrder[MAXN];     //���� 
char ans[MAXN];
int cnt;


//// ����root��ǰ���е�λ��
int GetPreOrderLoc(char root){
	int len = strlen(preOrder);
	for(int i = 0; i < len; i++){
		if(preOrder[i] == root){
			return i;
		}
	}
}

// ����root�������е�λ��
int GetInOrderLoc(char root){
	int len = strlen(inOrder);
	for(int i = 0; i < len; i++){
		if(inOrder[i] == root){
			return i;
		}
	}
}

//�ݹ鴦������inOrder[l...r]
//rootΪ�������ĸ��ڵ㣬l rָ�����������е�λ�� 
void dfs(char root, int l, int r){
	if(l <= r){
		int p1 = GetPreOrderLoc(root);    //root��ǰ���е�λ��
		int p2 = GetInOrderLoc(root);     //root�������е�λ�� 
		//�ݹ�������
		dfs(preOrder[p1+1], l, p2-1);
		//�ݹ������� 
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

