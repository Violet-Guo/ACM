#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n-i; j++){
				if(j)
					printf(" ");
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}

