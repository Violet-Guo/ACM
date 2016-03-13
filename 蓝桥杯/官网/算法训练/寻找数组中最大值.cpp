#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, num;
	while(scanf("%d", &n)!=EOF){
		int dis = 0, maxn = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &num);
			if(num > maxn){
				dis = i;
				maxn = num;
			}
		}
		
		printf("%d %d\n", maxn, dis);
	}
	return 0;
}

