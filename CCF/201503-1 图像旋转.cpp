#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int a[1010][1010];

int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m)!=EOF){
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
				
		for(int i = m-1; i >= 0; i--){
			for(int j = 0; j < n-1; j++){
				printf("%d ", a[j][i]); 
			}
			printf("%d\n", a[n-1][i]);
		}
	}
	return 0;
}

