#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#define INF 0xffffff
#define MAXN 25005
using namespace std;

int dis[MAXN];
int vis[MAXN];
int head[MAXN];
int t, r, p, s, cnt;

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
    while(scanf("%d %d %d %d", &t, &r, &p, &s)!=EOF){
        cnt = 0;
/*
        memset(head, -1, sizeof(head));
        memset(dis, 0x7f, sizeof(dis));
        memset(vis, 0, sizeof(vis));
*/

	for(int i = 0; i <= t; i++){
		head[i] = -1;
		dis[i] = INF;
		vis[i] = 0;
	}
	
        for(int i = 0; i < r; i++){
		int u, v, w;
		scanf("%d %d %d", &u, &v, &w);
		addedge(u, v, w);
		addedge(v, u, w);
	}
		
	for(int i = 0; i < p; i++){
		int u, v, w;
		scanf("%d %d %d", &u, &v, &w);
		addedge(u, v, w);
	}

        spfa(s);

        for(int i = 1; i <= t; i++){
		if(t == s)
			continue;
		if(dis[i] == INF){
			printf("NO PATH\n");
		}
		else{
			printf("%d\n", dis[i]);
		}
	}
    }
    return 0;
}
