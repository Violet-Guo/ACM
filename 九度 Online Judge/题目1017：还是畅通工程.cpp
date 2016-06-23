#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int u[110];

struct Node{
	int x, y, v;
}nodes[110];

int cmp(Node node1, Node node2){
	if(node1.v < node2.v)
		return 1;
	return 0;
}

void init(){
	for(int i = 0; i < 110; i++)
		u[i] = i;
}

int find(int n){
	while(n!=u[n])
		n = u[n];
	return n;
}

void un(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b)
		return;
	if(a > b)
		u[a] = b;
	else
		u[b] = a;
}

int main()
{
	int n, m;
	while(scanf("%d", &n)!=EOF && n){
		m = n*(n-1)/2;
		
		init();
		
		for(int i = 0; i < m; i++){
			scanf("%d%d%d", &nodes[i].x, &nodes[i].y, &nodes[i].v);
		}
		
		sort(nodes, nodes+m, cmp);
		
		int ans = 0, cnt = 0;
		
		for(int i = 0; i < m; i++){
			if(find(nodes[i].x) != find(nodes[i].y)){
				un(nodes[i].x, nodes[i].y);
				ans += nodes[i].v;
				cnt++;
				if(cnt == n-1)
					break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}

