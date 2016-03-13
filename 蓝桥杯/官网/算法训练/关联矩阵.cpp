#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int mp[110][1010];

int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m)!=EOF){
		memset(mp, 0, sizeof(mp));
		
		int a, b;
		for(int i = 0; i < m; i++){
			scanf("%d %d", &a, &b);
			mp[a-1][i] = 1;
			mp[b-1][i] = -1;
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(j)
					printf(" ");
				printf("%d", mp[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

