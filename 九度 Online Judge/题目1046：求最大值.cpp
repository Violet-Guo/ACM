#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int num[10];
	while(scanf("%d", &num[0])!=EOF){
		int maxn = num[0];
		for(int i = 1; i < 10; i++){
			scanf("%d", &num[i]);
			if(num[i] > maxn)
				maxn = num[i];	
		}
		printf("max=%d\n", maxn);
	}
	return 0;
}

