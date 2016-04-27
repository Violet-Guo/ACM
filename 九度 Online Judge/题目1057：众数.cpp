#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int a;
	int num[15];
	while(scanf("%d", &a)!=EOF){
		memset(num, 0, sizeof(num));
		num[a]++;
		
		for(int i = 1; i < 20; i++){
			scanf("%d", &a);
			num[a]++;
		}
		
		
		int maxn = 0, f = 0;;
		for(int i = 1; i <= 10; i++){
			if(num[i] > maxn){
				maxn = num[i];
				f = i;
			}
		}
		
		printf("%d\n", f);
	}
	return 0;
}

