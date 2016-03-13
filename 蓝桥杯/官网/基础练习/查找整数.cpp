#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, a;
	int num[1010];
	while(scanf("%d", &n)!=EOF){
		for(int i = 1; i <= n; i++)
			scanf("%d", &num[i]);
		scanf("%d", &a);
		int flag = 0;
		for(int i = 1; i <= n; i++){
			if(a == num[i]){
				flag = 1;
				printf("%d\n", i);
				break;
			}
		}
		if(!flag)
			printf("-1\n");
	}
	return 0;
}

