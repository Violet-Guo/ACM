#include<cstdio>
#include<cstring>
#include<algorithm>
#define INF 0xffffff
#define MAXN 605 
using namespace std;

int mp[MAXN][MAXN], dis[MAXN], team[MAXN];
bool vis[MAXN];

void dijkstra(int s, int n){
	memset(vis, false, sizeof(vis));
	
	for(int i = 1; i <= n; i++)
		dis[i] = mp[s][i];
		
	vis[s] = true;	
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
		
		vis[pos] = true;
		for(int j = 1; j <= n; j++){
			if(!vis[j] && dis[pos]+mp[pos][j] < dis[j]){
				dis[j] = dis[pos] + mp[pos][j];
			}
		}
	}
	if(dis[2] < INF)
		printf("%d\n", dis[2]);
	else
		printf("-1\n");
}

int main()
{
	int n, m;
	while(scanf("%d", &n)!=EOF){
		if(n == 0)
			break;
		
		scanf("%d", &m);
		
		for(int i = 0; i < MAXN; i++)
			for(int j = 0; j < MAXN; j++)
				mp[i][j] = INF;
		
		for(int i = 0; i < m; i++){
			int x, y, t;
			scanf("%d %d %d", &x, &y, &t);
			mp[x][y] = mp[y][x] = t;
		}
		
		for(int i = 1; i <= n; i++)
			scanf("%d", &team[i]);
			
		for(int i = 1; i<=n; i++){
			for(int j = i+1; j <= n; j++){
				if(team[i]==team[j])          //如果是同一个阵营，就不做操作 
					continue;
				else if(team[i]==1 && team[j]==2)   //如果不是同一个阵营，就简历单向边 
					mp[j][i] = INF;
				else if(team[i]==2 && team[j]==1)
					mp[i][j] = INF;
			}
		}
		
		dijkstra(1, n);	
	}
	return 0;
}

