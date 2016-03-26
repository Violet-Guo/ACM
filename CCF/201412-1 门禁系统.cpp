#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int num[1010];
int a[1010];

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		memset(num, 0, sizeof(num));
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
			
		for(int i = 0; i < n; i++){
			num[a[i]]++;
			if(i)
				printf(" ");
			printf("%d", num[a[i]]);
			
		}
		printf("\n");	
	}
	return 0;
}

