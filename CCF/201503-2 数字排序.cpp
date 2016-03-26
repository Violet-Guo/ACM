#include<cstdio>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
using namespace std;

struct node{
	int num;
	int c;
}a[1010];

bool cmp(node a, node b){
	if(a.c == b.c)
		return a.num < b.num;
	return a.c > b.c;
}

int main()
{
	int n, m;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < 1010; i++){
			a[i].num = i;
			a[i].c = 0;
		}
		
		for(int i = 0; i < n; i++){
			scanf("%d", &m);
			a[m].c++;
		}
		
		sort(a, a+1010, cmp);
		
		for(int i = 0; i < 1010; i++){
			if(0 == a[i].c)
				break;
			printf("%d %d\n", a[i].num, a[i].c);
		}
	}
	return 0;
}

