#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int num[1000005];
int ans[1000005];

int main()
{
	int n, m, a;
	while(scanf("%d", &n)!=EOF){
		memset(ans, 0, sizeof(ans));
		for(int i = 0; i < n; i++){
			scanf("%d", &num[i]);
			ans[num[i]]++;
		}
		
		scanf("%d", &m);
		
		while(m--){
			scanf("%d", &a);
			printf("%d\n", ans[a]);
		}
	}
	return 0;
}

