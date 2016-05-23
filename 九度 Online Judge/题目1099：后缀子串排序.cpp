#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct str{
	char str[1000];
}s[5000];

int cmp(const void *a, const void *b){
	struct str *c = (str *)a;
	struct str *d = (str *)b;
	return strcmp(c->str, d->str);
}

int main()
{
	char st[1000];
	int i, j, k;
	while(scanf("%s", &st)!=EOF){
		int len = strlen(st);
		for(i = 0; i < len; i++){
			for(j = i, k = 0; j < len; j++){
				s[i].str[k++] = st[j];
			}
			s[i].str[k] = '\0';
		}
		qsort(s, len, sizeof(s[0]), cmp);
		
		for(int i = 0; i < len; i++)
			puts(s[i].str);
	}
	return 0;
}

