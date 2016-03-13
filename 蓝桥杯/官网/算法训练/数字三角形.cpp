#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[105][105];
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++){
			for(int j = 0; j <= i; j++)
				scanf("%d", &num[i][j]);
		}
		
		for(int i = n-2; i>=0; i--){
			for(int j = 0; j <= i; j++){
				num[i][j] += num[i+1][j]>num[i+1][j+1]?num[i+1][j]:num[i+1][j+1];
			}
		}
		
		printf("%d\n", num[0][0]);
	}
	return 0;
}

