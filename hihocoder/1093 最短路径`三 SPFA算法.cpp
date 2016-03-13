#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#define INF 0xffffff
#define MAXN 100005
using namespace std;

int dis[MAXN];
int vis[MAXN];
int head[MAXN];
int n, m, s, t, cnt;

struct edge{
	int v, w, next;
}edge[1000005];

void addedge(int u, int v, int w){
	edge[cnt].v = v;
	edge[cnt].w = w;
	edge[cnt].next = head[u];
	head[u] = cnt++;
}

void spfa(int s){
	int pos, v;
	queue<int> q;
	q.push(s);
	dis[s] = 0;
	vis[s] = 1;
	while(!q.empty()){
		pos = q.front();
		q.pop();
		vis[pos] = 0;
		
		for(int i = head[pos]; i!=-1; i = edge[i].next){
			v = edge[i].v;
			if(dis[pos]+edge[i].w < dis[v]){
				dis[v] = dis[pos]+edge[i].w;
				if(!vis[v]){
					vis[v] = 1;
					q.push(v);
				}
			}
		}
	}
}

int main()
{
	while(scanf("%d %d %d %d", &n, &m, &s, &t)!=EOF){
		cnt = 0;
		memset(head, -1, sizeof(head));
		memset(vis, 0, sizeof(vis));
		memset(dis, 0x3f, sizeof(dis));
		
		for(int i = 0; i < m; i++){
			int u, v, w;
			scanf("%d %d %d", &u, &v, &w);
			addedge(u, v, w);
			addedge(v, u, w);
		}
		
		spfa(s);
		
		printf("%d\n", dis[t]);
	}
	return 0;
}

