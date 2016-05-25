#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int n, m;

struct students{
	char xh[1000];
	char name[1000];
	char sex[5];
	int age;
}s[2000];

int find(char x[1000]){
	for(int i = 0; i < n; i++){
		if(strcmp(x, s[i].xh)==0)
			return i;
	}
	return -1;
}

int main()
{
	char x[1000];
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++){
			scanf("%s %s %s %d", s[i].xh, s[i].name, s[i].sex, &s[i].age);
		}
		
		int index;
		scanf("%d", &m);
		for(int i = 0; i < m; i++){
			scanf("%s", x);
			index = find(x);
			if(index == -1){
				printf("No Answer!\n");
				continue;
			}
			printf("%s %s %s %d\n", s[index].xh, s[index].name, s[index].sex, s[index].age);
		}
		
	}
	return 0;
}

