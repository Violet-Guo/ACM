#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int num[200]; 

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			scanf("%d", &num[i]);
		sort(num, num+n);
		for(int i = 0; i < n; i++)
			printf("%d ", num[i]);
		printf("\n");
	}
	return 0;
}

