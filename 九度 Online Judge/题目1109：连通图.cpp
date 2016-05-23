#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int uset[1050];

int find(int x){
	if(x!=uset[x])
		uset[x] = find(uset[x]);
	return uset[x];
}

int main()
{
	int n, m;
	int a, b;
	while(scanf("%d %d", &n, &m)!=EOF && n){
		for(int i = 0; i <= n; i++){
			uset[i] = i;
		}
		
		for(int i = 0; i < m; i++){
			scanf("%d %d", &a, &b);
			a = find(a);
			b = find(b);
			if(a!=b)
				uset[a] = b;
		}
		
		int flag = 1, u = find(1);
		for(int i = 2; i <= n; i++){
			if(u!=find(i)){
				flag = 0;
				break;
			}
			
		}
		if(flag == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

