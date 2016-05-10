#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;

int vis[10005];

int main()
{
	int l, m, a, b;
	while(scanf("%d %d", &l, &m)!=EOF){
		memset(vis, 1, sizeof(vis));
		
		for(int i = 0; i < m; i++){
			scanf("%d %d", &a, &b);
			for(int j = a; j <= b&&j<=l; j++){
				vis[j] = 0;
			}
		}
		
		int ans = l+1;
		for(int i = 0; i <= l; i++){
			if(vis[i]==0)
				ans--;
		}
		
		printf("%d\n", ans);
	}
	return 0;
}

