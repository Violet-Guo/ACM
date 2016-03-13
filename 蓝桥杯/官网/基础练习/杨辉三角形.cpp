#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[40][40];
	while(scanf("%d", &n)!=EOF){
		memset(num, '\0', sizeof(num));
		
		num[0][0] = 1;
		
		printf("1\n");
		for(int i = 1; i < n; i++){
			for(int j = 0; j <= i; j++){
				if(j == 0 || j == i)
					num[i][j] = 1;
				else{
					num[i][j] = num[i-1][j-1]+num[i-1][j];
				}
				if(j)
					printf(" %d", num[i][j]);
				else
					printf("%d", num[i][j]);
			}
			printf("\n");
		}
			
	}
	return 0;
}

