#include<cstdio>
#include<stdlib.h>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct num{
	int x;
	int y;
}s[2000];

int cmp(const void *a, const void *b){
	struct num *c = (num *)a;
	struct num *d = (num *)b;
	if(c->x != d->x)
		return c->x - d->x;
	else
		return c->y - d->y;
}

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			cin >> s[i].x >> s[i].y;
		
		qsort(s, n, sizeof(s[0]), cmp);
		
		cout << s[0].x << " " << s[0].y << endl;
	}
	return 0;
}

