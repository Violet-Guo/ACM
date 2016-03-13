#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main()
{
	int num[30], len;
	while(scanf("%d", &num[0])!=EOF){
		len = 0;
		while(num[len]!=0){
			scanf("%d", &num[++len]);
		}
		
		sort(num, num+len, cmp);
		/*
		for(int i = 0; i < len; i++)
			printf("%d ", num[i]);
		*/
		
		printf("%d\n", num[1]);
	}
	return 0;
}

