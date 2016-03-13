#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int num[10005], n;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			scanf("%d", &num[i]);
		
		sort(num, num+n);
		
		printf("%d %d\n", num[n-1], num[0]);
	}
	return 0;
}

