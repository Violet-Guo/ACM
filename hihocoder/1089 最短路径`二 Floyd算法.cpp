#include<cstdio>
#include<cstring>
#include<algorithm>
#define INF 0xffffff
#define MAXN 110
using namespace std;

int mp[MAXN][MAXN];
int n, m;

void floyd(){
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				mp[i][j] = min(mp[i][j], mp[i][k]+mp[k][j]);
			}
		}
	}
}

int main()
{
	while(scanf("%d %d", &n, &m)!=EOF){
		for(int i = 0; i <= n; i++)
			for(int j = 0; j <= n; j++)
				mp[i][j] = INF;
		
		for(int i = 0; i < m; i++){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			mp[a][b] = mp[b][a] = min(mp[a][b], c);
		}
		
		floyd();
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(i == j)
					printf("0 ");
				else
					printf("%d ", mp[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

