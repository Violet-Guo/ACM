#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int a[205][205], b[205][205], c[205][205];
	int m, s, n;
	while(scanf("%d %d %d", &m, &s, &n)!=EOF){
		for(int i = 0; i < m; i++){
			for(int j = 0; j < s; j++){
				scanf("%d", &a[i][j]);
			}
		}
		
		for(int i = 0; i < s; i++){
			for(int j = 0; j < n; j++)
				scanf("%d", &b[i][j]);
		}
		
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				int sum = 0;
				for(int k = 0; k < s; k++){
					sum = sum+a[i][k]*b[k][j];
				}
				c[i][j] = sum;
				if(j)
					printf(" ");
				printf("%d", c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

