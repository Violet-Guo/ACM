#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct rat{
	int weight;
	char hat[20];
}r[200];

int cmp(const void *a, const void *b){
	struct rat *c = (rat *)a;
	struct rat *d = (rat *)b;
	return d->weight-c->weight;
}

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++){
			scanf("%d %s", &r[i].weight, r[i].hat);
		}
		
		qsort(r, n, sizeof(r[0]), cmp);
		
		for(int i = 0; i < n; i++){
			printf("%s\n", r[i].hat);
		}
	}
	return 0;
}

