#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int s[110];

struct Node{
	int start, end, value;
}nodes[110];

int cmp(Node node1, Node node2){
	if(node1.value < node2.value)
		return 1;
	return 0;
}

int find(int n){
	while(s[n] != n)
		n = s[n];
	return n;
}

void un(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b)
		return;
	else if(a > b)
		s[a] = b;
	else
		s[b] = a; 
}

int main()
{
	int n, m, f, v;
	while(scanf("%d", &n)!=EOF && n){
		m = (n-1)*n/2;
		
		for(int i = 0; i < m; i++){
			scanf("%d%d%d%d", &nodes[i].start, &nodes[i].end, &v, &f);
			if(!f)
				nodes[i].value = v;
			else
				nodes[i].value = 0;
		}
		
		sort(nodes, nodes+m, cmp);
		
		for(int i = 1; i < n+1; i++)
			s[i] = i;
		
		int ans = 0, cnt = 0;
		
		for(int i = 0; i < m; i++){
			if(find(nodes[i].start) != find(nodes[i].end)){
				un(nodes[i].start, nodes[i].end);
				ans += nodes[i].value;
				cnt++;
				if(cnt == n-1)
					break;
			}
		}
		
		printf("%d\n", ans);
	}
}
