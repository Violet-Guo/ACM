#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int h[1010];
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			scanf("%d", &h[i]);
		
		int maxn = 0, hmin = 0;
		for(int i = 0; i < n; i++){
			hmin = h[i];
			for(int j = i; j < n; j++){
				if(hmin > h[j])
					hmin = h[j];
				int a;
				a = (j-i+1)*hmin;
				if(a > maxn)
					maxn = a;
			}
		}
		printf("%d\n", maxn);
	}
	return 0;
}

