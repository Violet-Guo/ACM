#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int num[25];
	while(scanf("%d", &num[0])!=EOF){
		int len = 0;
		while(num[len]){
			scanf("%d", &num[++len]);
		}
		
		for(int i = len-1; i>=0; i--){
			if(len-i-1)
				printf(" ");
			printf("%d", num[i]);
		}
		printf("\n");
	}
	return 0;
}

