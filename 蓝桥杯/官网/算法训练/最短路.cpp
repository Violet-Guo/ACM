#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#define MAXN 20005
using namespace std;

int dis[MAXN];
int vis[MAXN];
int head[MAXN];
int n, m, cnt;

struct edge{
	int v, w, next;
}edge[200005];

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
			if(dis[pos] + edge[i].w < dis[v]){
				dis[v] = dis[pos] + edge[i].w;
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
	while(scanf("%d %d", &n, &m)!=EOF){
		cnt = 0;
		
		memset(head, -1, sizeof(head));
		memset(dis, 0x7f, sizeof(dis));
		memset(vis, 0, sizeof(vis));
		
		while(m--){
			int u, v, l;
			scanf("%d %d %d", &u, &v, &l);
			addedge(u, v, l);
		}
		
		spfa(1);
		
		for(int i = 2; i <= n; i++)
			printf("%d\n", dis[i]);
	}
	return 0;
}
