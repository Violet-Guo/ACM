#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main()
{
	int num[1010], a[1010];
	int n, m, l, r, k;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			scanf("%d", &num[i]);
		
		scanf("%d", &m);
		while(m--){
			memset(a, 0, sizeof(a));
			scanf("%d %d %d", &l, &r, &k);
			for(int j = 0, i = l-1; i < r; i++){
				a[j++] = num[i];
			}
			
			sort(a, a+r-l+1, cmp);
			printf("%d\n", a[k-1]);
		}
	}
	return 0;
}

