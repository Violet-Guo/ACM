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
	while(n != u[n])
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
	int i, m, n, x, y, v;
	while(scanf("%d %d", &n, &m)!=EOF && n){
		
		init();
		
		for(i = 0; i < n; i++){
			scanf("%d%d%d", &nodes[i].x, &nodes[i].y, &nodes[i].v);
		}
		
		sort(nodes, nodes+n, cmp);
		
		int ans = 0, cnt = 0;
		for(i = 0; i < n; i++){
			if(find(nodes[i].x) != find(nodes[i].y)){
				un(nodes[i].x, nodes[i].y);
				ans += nodes[i].v;
				cnt++;
				
				if(cnt == m-1)
					break;
			}
		}
		
		if(cnt < m-1)
			printf("?\n");
		else
			printf("%d\n", ans);
	} 
	return 0;
}

