#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int s[1010];

int find(int n){
	while(n != s[n])
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
	int n, m, a, b;
	while(scanf("%d", &n)!=EOF && n){
		scanf("%d", &m);
		
		for(int i = 1; i < 1010; i++){
			s[i] = i;
		}
		
		for(int i = 0; i < m; i++){
			scanf("%d %d", &a, &b);
			un(a, b);
		}
		
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			if(i!=s[i])
				cnt++;
		}
		
		printf("%d\n", n-1-cnt);
	}
	return 0;
}

