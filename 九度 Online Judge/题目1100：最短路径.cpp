#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define INF 100010
#define ll long long
using namespace std;

int n, m;
ll mp[150][150];

void flody(){
	for(int k = 0; k < n; k++){
		for(int j = 0; j < n; j++){
			mp[0][j] = min(mp[0][j], mp[0][k]+mp[k][j]);
		}
	}
}

int main()
{
	int x, y;
	while(scanf("%d %d", &n, &m)!=EOF){
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				mp[i][j] = INF;
			}
		}
		
		ll k = 1;
		scanf("%d %d", &x, &y);
		mp[x][y] = mp[y][x] = k;
		
		for(int i = 1; i < m; i++){
			scanf("%d %d", &x, &y);
			k = k*2;
			mp[x][y] = mp[y][x] = k;
		}
		
		flody();
		
		for(int i = 1; i < n; i++){
			if(mp[0][i] == INF){
				printf("-1");
			}
			else
				printf("%lld\n", mp[0][i]%100000);
		}
	}
	return 0;
}

