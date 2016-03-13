#include<cstdio>
#include<cstring>
#include<algorithm>
#define INF 0xffffff
#define MAXN 1010
using namespace std;

int mp[MAXN][MAXN];
int vis[MAXN];
int dis[MAXN];
int n, m, s, t;



void dijkstra(int s){
	for(int i = 1; i <= n; i++)
		dis[i] = mp[s][i];
	vis[s] = 1;
	dis[s] = 0;
	
	for(int i = 1; i < n; i++){
		int min = INF, pos;
		for(int j = 1; j <= n; j++){
			if(!vis[j] && dis[j] < min){
				min = dis[j];
				pos = j;
			}
		}
		
		if(min == INF)
			break;
			
		vis[pos] = 1;
		for(int j = 1; j <= n; j++){
			if(!vis[j] && dis[pos] + mp[pos][j] < dis[j]){
				dis[j] = dis[pos] + mp[pos][j];
			}
		}
	}
}

int main()
{
	while(scanf("%d %d %d %d", &n, &m, &s, &t)!=EOF){
		memset(mp, 0x7f, sizeof(mp));
		memset(vis, 0, sizeof(vis));
		
		for(int i = 0; i < m; i++){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			mp[a][b] = mp[b][a] = min(mp[a][b], c);
		}
		
		dijkstra(s);
		
		printf("%d\n", dis[t]);
		
	}
	return 0;
}

