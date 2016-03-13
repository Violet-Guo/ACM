#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main()
{
	int num[5];
	while(scanf("%d %d %d", &num[0], &num[1], &num[2])!=EOF){
		sort(num, num+3, cmp);
		
		printf("%d %d %d\n", num[0], num[1], num[2]);
	}
	return 0;
}

