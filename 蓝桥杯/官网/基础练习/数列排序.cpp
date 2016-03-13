#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[210];
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			scanf("%d", &num[i]);
		
		sort(num, num+n);
		
		for(int i = 0; i < n; i++){
			if(i)
				printf(" ");
			printf("%d", num[i]);
		}
		printf("\n");
	}
	return 0;
}

