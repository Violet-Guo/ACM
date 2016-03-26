#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int mp[110][110]; 

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		int x1, y1, x2, y2;
		int res = 0;
		memset(mp, 0, sizeof(mp));
		
		for(int k = 0; k < n; k++){
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
			x2--;
			y2--;
			for(int i = x1; i <= x2; i++){
				for(int j = y1; j <= y2; j++){
					if(mp[i][j] == 0){
						mp[i][j] = 1;
						res++;
					}
				}
			}
		}
		printf("%d\n", res);
	}
	return 0;
}

